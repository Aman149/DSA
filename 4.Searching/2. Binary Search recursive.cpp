#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int start, int end, int target) {
    
    if(start > end)
        return -1;

    int mid = (start+end)/2;

    if(arr[mid] == target)
        return mid;
    else if(arr[mid] > target)
        return binarySearch(arr, start, mid-1, target);
    else
        return binarySearch(arr, mid+1, end, target);

}

int main() {
    vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8};
    cout<<binarySearch(arr, 0, arr.size()-1, 5);
}