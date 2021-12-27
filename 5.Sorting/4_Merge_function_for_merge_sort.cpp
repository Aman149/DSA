#include<bits/stdc++.h>
using namespace std;

void mergeSort(int arr[], int low, int mid, int high) {
    int n1 = mid-low+1, n2 = high-mid;;
    int left[n1],right[n2];

    for(int i=0; i<n1; i++) 
        left[i] = arr[low+i];

    for(int i=0; i<n2; i++) 
        right[i] = arr[n1+i]; 

    int i=0, j=0, k=0;

    while(i<n1 && j<n2) {
        if(left[i] <= right[j])
            arr[k++] = left[i++];
        
        else
            arr[k++] = right[j++];
    }
    
    while(i<n1)
        arr[k++] = left[i++];

    while(j<n2)
        arr[k++] = right[j++];
}

int main() {
    int arr[] = {1,4,6,8,10,2,3,5};
    mergeSort(arr,0,4,7);

    for(int i=0; i<8; i++) 
        cout<<arr[i]<<" ";
}