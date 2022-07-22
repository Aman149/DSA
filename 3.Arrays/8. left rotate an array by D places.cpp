#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int low, int high) {
    while(low < high)
        swap(arr[high--], arr[low++]);
}

void leftRotate(int arr[], int n, int d) {
    reverse(arr, 0, d-1);
    reverse(arr, d, n-1);
    reverse(arr, 0, n-1);
}

int main() {
    int arr[] = {8, 5, 0, 10, 0, 20};
    int n = 6;
    leftRotate(arr, 6, 2);
    for(int i=0; i<n ; i++)
        cout<< arr[i] <<" ";
}