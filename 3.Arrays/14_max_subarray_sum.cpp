#include<iostream>
using namespace std;

int maxSum(int arr[], int n) {
    int sum=0,ans=0;
    
    for (int i = 0; i < n; i++)
    {
        sum = sum+arr[i];
        ans = max(sum, ans);

        if(sum < 0) 
            sum = 0;
    }
    return ans;
}

int main() {
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int n = 7;
    cout<<maxSum(arr, n);
}