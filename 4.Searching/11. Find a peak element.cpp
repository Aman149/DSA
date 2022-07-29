#include<bits/stdc++.h>
using namespace std;

//Find the peak elements in a given unsorted array

int findPeak(vector<int> arr) {
    int low = 0, high = arr.size()-1;
    int mid = (low+high)/2;

    while(low < high) {
        if(arr[mid] < arr[mid+1])
            low = mid+1;
        else
            high = mid;
        mid = (low+high)/2;
    }
    return mid;
}

int main() {
    vector<int> arr = {5, 12, 14, 13, 5, 20, 12, 1};
    cout<<findPeak(arr);
}