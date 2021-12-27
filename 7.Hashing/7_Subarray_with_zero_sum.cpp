#include <bits/stdc++.h>
using namespace std;

// To find if the sum of subarray is zero 
//if there is a subarray then if we keep on adding and storing in set we will have same sum more than once
// 1 2 3 -3 2
// 1 3 6  3 2 
bool zeroSum(int arr[], int n) {
    unordered_set<int> s;
    int sum=0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
        
        if(s.find(sum) != s.end())
            return true;
        if(sum == 0)
            return true;
        s.insert(sum);
    }
    return false;
}

int main() {
    int arr1[] = {4,5,6,6,7,1,2,2,2,2};
    cout<<distinct(arr1,10);
}