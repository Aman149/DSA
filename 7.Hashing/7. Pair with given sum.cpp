#include<bits/stdc++.h>
using namespace std;

bool pairWithGivenSum(int arr[], int n, int sum) {
    unordered_set<int> hash;
    
    for(int i=0; i<n; i++) {
        if(hash.find(sum - arr[i]) != hash.end())
            return true;
        else
            hash.insert(arr[i]);
    }
    return false;
    
}

int main() {
    int arr[] = {3, 2, 8, 15, -8};
    int n=5;
    cout<<pairWithGivenSum(arr, n, 17);
}
