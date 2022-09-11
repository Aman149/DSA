#include<bits/stdc++.h>
using namespace std;

void leaders(int arr[], int n) {
    int currMax = INT_MIN;

    for(int i=n-1; i>=0; i--) {
        if(arr[i] > currMax) {
            cout<<arr[i]<<" ";
            currMax = arr[i];
        }
    }
}

int main() {
    int arr[] = {7, 10, 4, 3, 6, 5, 2};
    int n = 7;
    leaders(arr, n);
}