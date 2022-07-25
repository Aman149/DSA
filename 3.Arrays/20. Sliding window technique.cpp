#include<bits/stdc++.h>
using namespace std;

//Basic Sliding Window implementation
int slidingWindow(int arr[], int n, int k) {
    
    int currSum = 0, maxSum = 0;
    
    //First get the sun of k-1 elements
    for(int i=0; i<k; i++)
        currSum += arr[i];

    maxSum = currSum;

    //To find max in remaining element
    for(int i=k; i<n; i++) {
        currSum = currSum + arr[i] - arr[i-k];
        maxSum = max(currSum, maxSum);
    }
    return maxSum;
}

//Find subarray with given sum using sliding window
void subarray(int arr[], int n, int k) {
    int start = 0;
    int sum = 0;
    int end = 0;

    while(end < n) {

        if(sum < k)
            sum += arr[end++];

        else if(sum > k)
            sum -= arr[start++];
        
        else {
            cout<<"From "<<start<<" to "<<end;
            return;
        }
            
    }

    cout<<"Sum not found";
}

int main() {
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = 6;
    //cout<<slidingWindow(arr, n, 3);
    subarray(arr, n, 33);
}
