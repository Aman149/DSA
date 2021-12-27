#include <bits/stdc++.h>
using namespace std;

bool givenSum(int arr[], int n, int x) {
    unordered_set<int> s;
    int sum = 0;
    for(int i=0 ;i<n; i++) {
        sum += arr[i];

        if(sum == x)
            return true;
        if(s.find(arr[i] - x) != s.end())
            return true;
        s.insert(sum);
    }
    return false;
}

int main() {
    int arr1[] = {5, 8, 6, 13, 3, -1};
    cout<<distinct(arr1,6,22);
}