#include <bits/stdc++.h>
using namespace std;

int distinct(int arr[],int n) {
    unordered_set<int> s;

    for(int i=0; i<n; i++)
        s.insert(arr[i]);

    return s.size();

    /*
    unordered_set<int> s(arr, arr+n);
    return s.size();
    */
}

int main() {
    int arr[] = {1,2,2,2,2,4,5,6,6,7};
    distinct(arr,10);
}