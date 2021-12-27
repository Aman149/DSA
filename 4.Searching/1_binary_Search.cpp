//Binary search Recurrsive Approach
#include<iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int x) {
    
    int mid = (start+end)/2;

    if(arr[mid] == x) 
        return mid;

    else if(arr[mid] < x)
        binarySearch(arr, mid+1, end, x);

    else 
        binarySearch(arr, start, mid-1, x);
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    cout<<binarySearch(arr,0, 8, 5);
}