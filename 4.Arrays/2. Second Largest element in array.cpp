#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n) {
    int max1 = arr[0], max2 = 0;

    for(int i=1; i<n; i++) {
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }

        else if(arr[i] > max2)
            max2 = arr[i];
    }

    return max2;
}

int main() {
    int arr[] = {1, 2, 10, 20, 100, 90};
    cout<<secondLargest(arr, 6);
}