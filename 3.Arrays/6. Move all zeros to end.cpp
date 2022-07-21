//Moving all zeros to end keeping the order of remaining elements.
#include<bits/stdc++.h>
using namespace std;

void moveZeros(int arr[], int n) {
    int nonZero = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] != 0) {
            swap(arr[nonZero], arr[i]);
            nonZero++;
        }
    }
}

int main() {
    int arr[] = {8, 5, 0, 10, 0, 20};
    int n = 6;
    moveZeros(arr, 6);
    for(int i=0; i<n ; i++)
        cout<< arr[i] <<" ";
}