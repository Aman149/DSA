#include<bits/stdc++.h>
using namespace std;

int longestSubarrray(int arr[], int n, int sum) {
    unordered_map<int, int> hash;
    vector<int> ans;
    int prefixSum = 0;
    for(int i=0; i<n; i++) {
        prefixSum += arr[i];
        if(prefixSum == sum) {
            ans.push_back(i+1);
            return ans;
        }
        if(hash.find(prefixSum-sum) != hash.end()) {
            ans.push_back()
        }
    }
}

int main() {
    int arr[] = {-1, 4, -3, 5 ,1};
    int n=5;
    vector<int> ans = longestSubarrray(arr, n, 3);
    for(auto x : ans)
        cout<<x<<" ";
}
