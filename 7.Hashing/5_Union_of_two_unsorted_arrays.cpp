#include <bits/stdc++.h>
using namespace std;

int distinct(int arr1[],int arr2[],int m,int n) {
    unordered_set<int> s(arr1, arr1+m);
    for(int i=0; i<n; i++) 
        s.insert(arr2[i]);
    return s.size();
}

int main() {
    int arr1[] = {4,5,6,6,7,1,2,2,2,2};
    int arr2[] = {6,6,7,1,2,2,2,2};
    cout<<distinct(arr1,arr2,10,8);
}