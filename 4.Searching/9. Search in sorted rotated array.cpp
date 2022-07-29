#include<bits/stdc++.h>
using namespace std;

//O(Log n) approach to search an element in a sorted and rotated array.

int searchRotated(vector<int> arr, int target) {
    int low = 0, high = arr.size()-1;

    while(low <= high) {
        int mid = (low+high)/2;

        if(arr[mid] == target)
            return mid;
        
        //Left half sorted
        else if(arr[mid] > arr[low]) {
            if(target >= arr[low] && target < arr[mid])
                high = mid-1;
            else
                low = mid+1;
        }

        //Right half sorted
        else {
            if(target > arr[mid] && target <= arr[high])
                low = mid+1;
            else
                high = mid-1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50, 8, 9};
    cout<<searchRotated(arr, 30);
}