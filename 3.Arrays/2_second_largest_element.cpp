#include<iostream>
using namespace std;

int secondLargest(int arr[], int n) {

    int largest = arr[0];
    int secLargest = -1;

    for(int i=0; i<n; i++) {

        if(arr[i] > largest) {
            secLargest = largest;
            largest = arr[i];
        }

        else if(arr[i] != largest) {
            if(secLargest == -1 || arr[i] > secLargest)
                secLargest = arr[i];
        }
    }
    return secLargest;
}

int main() {
    int arr[] = {12,12,12,7};
    cout<<secondLargest(arr, 4);
}