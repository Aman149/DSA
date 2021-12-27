#include <bits/stdc++.h>
using namespace std;
// 5, 8, -4, -4 , 9, -2, -2 = 0
// 5, 13, 9, 5, 14, 12, 10


int longestSum(int arr[], int n, int s) {
    unordered_map<int, int> m;
    int sum = 0,res=0;

    for(int i=0 ;i<n; i++) {
        sum += arr[i];

        if(sum == s) 
            res = i+1;

        if(m.find(sum) == m.end()) //sum not present in m
            m.insert({sum,i});

        if(m.find(sum-s) != m.end()) 
            res = max(res, i-m[sum-s]);
    }

    return res;

}

int main() {
    int arr[] = { 5, 8, -4, -4 , 9, -2, -2};
    cout<<longestSum(arr, 7, 0);
}