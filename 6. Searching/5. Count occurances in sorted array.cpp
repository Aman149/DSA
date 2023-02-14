#include<bits/stdc++.h>
using namespace std;

//Given a sorted array and an element x
//we need to count occurrences of x in the array.

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

int lastOccurance(vector<int> arr, int n, int target) {
    int start = 0, end = n-1;
    while(start <= end) {
        int mid = (start+end)/2;
        if(arr[mid] >  target)
            end = mid;
        else if (arr[mid] < target)
            start = mid + 1;
        else {
            if(arr[mid] == target && arr[mid+1] != target)
                return mid;
            else
                start = mid + 1;
        }
    }
    return -1;
}

int findCount(vector<int> arr, int n, int target) {
    int first = firstOccurance(arr, n, target);

    if(first == -1)
        return -1;
    return (lastOccurance(arr, n, target) - first) + 1;
}

int main() {
    vector<int> arr = {10 ,15, 20 ,20, 20};
    cout<<findCount(arr, arr.size(), 20);
}