#include<bits/stdc++.h>
using namespace std;

bool subarraySum(int arr[], int n) {
    unordered_set<int> hash;
    int prefixSum = 0;

    for(int i=0; i<n; i++) {
        prefixSum += arr[i];
        if(hash.find(prefixSum) != hash.end() || prefixSum == 0)
            return true;
        else
            hash.insert(prefixSum);
    }  
    return false;
}

int main() {
    int arr[] = {-1, 4, -3, 5 ,1};
    int n=5;
    cout<<subarraySum(arr, n);
}
