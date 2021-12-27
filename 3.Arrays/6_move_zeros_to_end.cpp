#include<iostream>
using namespace std;

int zerosToEnd(int arr[], int n) {
    int count = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] != 0) 
            swap(arr[i], arr[count++]);
    }
}

int main() {
    int arr[] = {1,2,0,3,0,0,5,6,0,0};
    int n = zerosToEnd(arr, 10);

    for (int i = 0; i < n; i++)
        cout << arr[i] <<" "<< endl;
}