#include<bits/stdc++.h>
using namespace std;

//Find Equilibrium Point
bool findEquilibrium(int arr[], int n) {

    //First compute prefix sum
    int sum = 0;
    for(int i=0; i<n; i++)
        sum += arr[i];
    
    //Compute left sum and at same time consider sum as right sum - arr[i]
    int leftSum = 0;
    for(int i=0; i<n; i++) {
        if(leftSum == sum - arr[i])
            return true;
        leftSum += arr[i];
        sum -= arr[i];
    }
    return false;
}

int main() {
    int arr[] = {3, 4, 8, -9, 20, 6};
    int n = 6;
    cout<<findEquilibrium(arr, n);
}
