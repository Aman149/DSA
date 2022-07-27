#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int n, int target) {

    int start = 0, end = n-1;

    while(start <= end) {

        int mid = (start+end)/2;

        if(arr[mid] >  target)
            end = mid;

        else if (arr[mid] < target)
            start = mid + 1;

        else {
            if(arr[mid] == target || arr[mid-1] != target)
                return mid+1;
            else
                end = mid - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {10 ,15, 20 ,20, 20};
    cout<<binarySearch(arr, arr.size(), 20);
}