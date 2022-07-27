#include<bits/stdc++.h>
using namespace std;

//Given a sorted binary array, we need to count 1s in this array

int firstOccurance(vector<int> arr, int n, int target) {
    int start = 0, end = n-1;
    while(start <= end) {
        int mid = (start+end)/2;
        if(arr[mid] >  target)
            end = mid - 1;
        else if (arr[mid] < target)
            start = mid + 1;
        else {
            if(arr[mid] == target && arr[mid-1] != target)
                return mid;
            else
                end = mid - 1;
        }
    }
    return -1;
}

int binaryCount(vector<int> arr, int n) {
    if(arr[n-1] == 0)
        return 0;
    else if(arr[0] == 1)
        return n;
    else
        return n-firstOccurance(arr, n, 1)
}

int main() {
    vector<int> arr = {0, 0, 1, 1, 1, 1};
    cout<<binaryCount(arr, arr.size();
}