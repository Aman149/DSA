#include<bits/stdc++.h>
using namespace std;

int firstOccurance(int arr[], int n, int x) {
    int low = 0, high = n-1, res = -1;

    while(low <= high)  {

        int mid = (low + high)/2;

        if(arr[mid] < x)
            low = mid + 1;
        else if(arr[mid] > x)
            high = mid - 1;
        else {
            res = mid;
            high = mid - 1;
        }
    }
    return res;
}

int lastOccurance(int arr[], int n, int x) {
        int low = 0, high = n-1, res = -1;

    while(low <= high)  {

        int mid = (low + high)/2;

        if(arr[mid] < x)
            low = mid + 1;
        else if(arr[mid] > x)
            high = mid - 1;
        else {
            res = mid;
            low = mid + 1;
        }
    }
    return res;
}

int main() {
    int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    int n = sizeof(arr) / sizeof(int);
    cout<<lastOccurance(arr,n,2)<<"  "<<firstOccurance(arr,n,2);
} 