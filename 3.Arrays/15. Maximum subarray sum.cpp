#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n) {

    int currSum = arr[0], maxSum = 0;
    for(int i=1; i<n; i++) {
        currSum = max(arr[i], currSum+arr[i]);
        if(currSum <0)
            currSum = 0;
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int main() {
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int n = 7;
    cout<<maxSubarraySum(arr, n);
}
