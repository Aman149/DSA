#include<iostream>
using namespace std;

bool reverseAnArray(int arr[], int n) {
    int low=0, high=n-1;
    while(low < high) {
        int temp = arr[low];
        arr[low++] = arr[high];
        arr[high--] = temp;
    }
}

int main() {
    int arr[] = {1,5,12,12,60};
    reverseAnArray(arr, 5);
    for(int i=0; i<5; i++) 
        cout<<arr[i]<<" ";
}
