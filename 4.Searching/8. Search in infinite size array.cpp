#include<bits/stdc++.h>
using namespace std;

//Given an infinite sized array
//we need to write an efficient solution to search an element

//Using unbounded binary search
int binarySearch(vector<int> arr, int target) {
    int low = 0, high = 1;
    while(low <= high) {
        int mid = (low+high)/2;

        if(arr[mid] == target)
            return mid;
        else if(arr[mid] > target)
            high = mid-1;
        else {
            low = mid + 1;
            high = high * 2;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {6, 22, 26, 43, 58, 59, 65, 77, 81, 110, 113, 150, 180, 200, 201, 220, 260, 300, 500, 670, 800};
    cout<<binarySearch(arr, 201);
}