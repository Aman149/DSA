#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n) {
    int temp = arr[0];

    for(int i= 1; i<n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

int main() {
    int arr[] = {8, 5, 0, 10, 0, 20};
    int n = 6;
    leftRotate(arr, 6);
    for(int i=0; i<n ; i++)
        cout<< arr[i] <<" ";
}