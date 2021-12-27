#include<iostream>
using namespace std;

int leftRotateArray(int arr[], int n) {

    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

int main() {
    int arr[] = {1,5,12,12,60};
    leftRotateArray(arr, 5);
    for(int i=0; i<5; i++) 
        cout << arr[i] << " ";
}