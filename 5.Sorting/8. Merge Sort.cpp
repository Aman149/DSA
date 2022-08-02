#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int low, int mid, int high) {
    int n1 = mid-low+1, n2 = high-mid;
    int left[n1], right[n2];

    for(int i=0; i<n1; i++)
        left[i] = arr1[low+i];

    for(int j=0; j<n2; j++)
        right[j] = arr1[mid+1+j];
    
    int i=0, j=0, k=low;

    while(i<n1 && j<n2){
        
        if(left[i]<=right[j])
            arr1[k++]=left[i++];
            
        else
            arr1[k++]=right[j++];
    }

    while(i<n1)
        arr1[k++] = left[i++];

    while(j<n2)
        arr1[k++] = right[j++];
}

void mergeSort(int arr[],int low, int high) {
    if(low<high) {
        int mid = low+(high-low)/2;
        mergeSort(arr, 0, mid);
        mergeSort(arr, mid+1, high);
        merge(arr,low, mid, high);
    }
}

int main() {
    int arr[] = {10,15,20,40,8,11,15,22,25};
    mergeSort(arr,0,8);
    for(int it : arr)
        cout<<it<<" ";
}