#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int n, int target) {

    int start = 0, end = n-1, mid;

    while(start <= end) {
        mid = (start+end)/2;

        if(arr[mid] == target)
            return mid;
        else if(arr[mid] > target)
            end = mid-1;
        else
            start = mid+1;
    }
    return -1;
}

int main() {
    vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8};
    cout<<binarySearch(arr, arr.size(), 5);
}