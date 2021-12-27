#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {

    for(int i=0; i<n; i++) {
        int min_index = i;
        for(int j=i+1; j<n; j++) {
            
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[min_index], arr[i]);
    }
}

int main() {
    int arr[] = {6,2,4,5,8,3,10};
    selectionSort(arr,7);

    for(int i=0; i<7; i++) 
        cout<<arr[i]<<" ";
}
