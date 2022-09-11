#include<bits/stdc++.h>
using namespace std;

int maxSubarrSumNaieve(int arr[], int n) {
    int res = arr[0];

    for(int i=0; i<n; i++) {
     int currMax = arr[i];
     int currSum = arr[i];

     for(int j=1; j<n; j++) {
          int idx = (i+j) % n;
          currSum += arr[idx];
          currMax = max(currMax, currSum);
     }
     res = max(res, currMax);
    }

    return res;
}

int kadane(int arr[], int n) {
     int res = arr[0];
     int maxSum = arr[0];

     for(int i=1; i<n; i++) {
          maxSum = max(maxSum+arr[i], arr[i]);
          res = max(res, maxSum);
     }
     return res;
}

int maxSubarrSum(int arr[], int n) {
     int maxSum = kadane(arr, n);
     if(maxSum < 0)
          return maxSum;

     int arrSum = 0;
     for(int i=0; i<n; i++) {
          arrSum += arr[i];
          arr[i] = -arr[i];
     }

     int maxCircular = arrSum + kadane(arr, n);
     return max(maxCircular, maxSum);
}

int main() {
	
     int arr[] = {5, -2, 3, 4}, n = 4;
     //cout<<maxSubarrSumNaieve(arr, n);
     cout<<maxSubarrSum(arr,n);
}