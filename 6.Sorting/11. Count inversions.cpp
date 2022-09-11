#include<bits/stdc++.h>
using namespace std;

int merge(int arr[], int l, int m, int r) {
    int n1 = m-l+1, n2 = r-m;
    int left[n1], right[n2];

    for(int i=0; i<n1; i++)
        left[i] = arr[l+i];
    for(int i=0; i<n2; i++)
        right[i] = arr[m+i+1];
    
    int i=0, j=0, k=l, res = 0;
    while(i<n1 && j<n2) {
        if(left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        }
        else {
            arr[k] = right[j];
            //This single line can get the job done of finding inversions
            res = res + (n1-i);
            j++;
        }
        k++;
    }

    while(i<n1)
        arr[k++] = left[i++];
    while(j<n2)
        arr[k++] = right[j++];
    
    return res;
}

int mergeSort(int arr[], int p, int r) {
    int inversion = 0;
    if(p<r) {
        int q = (p+r)/2;
        inversion+= mergeSort(arr,p,q);
        inversion+= mergeSort(arr,q+1,r);
        inversion+= merge(arr,p,q,r);
    }
    return inversion;
 }

int main() {
    int arr[] = {2, 5, 8, 11, 3, 6, 9, 13};
    cout<<mergeSort(arr, 0, 7);
}