#include <bits/stdc++.h>
using namespace std;

bool distinct(int arr[], int m,int x) {
    unordered_set<int> s;

    for(int i=0; i<m; i++) {
        if(s.find(x-arr[i]) != s.end()) 
            return true;
        s.insert(arr[i]);
    }
    return false;
}

int main() {
    int arr1[] = {4,5,6,6,7,1,2,2,2,2};
    cout<<distinct(arr1,10, 11);
}