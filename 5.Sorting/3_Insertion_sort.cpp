#include<bits/stdc++.h>
using namespace std;

insertionSort(int arr[], int n) {

    for(int i=1; i<n; i++) {
        int j=i-1;
        int val = arr[i];
        while(j>=0 && arr[j] > val) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = val;
    }
}

int main() {
    int arr[] = {6,2,4,5,8,3,10};
    insertionSort(arr,7);

    for(int i=0; i<7; i++) 
        cout<<arr[i]<<" ";
}