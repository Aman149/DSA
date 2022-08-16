#include<bits/stdc++.h>
using namespace std;

void unionCount(int arr1[], int arr2[], int n, int m) {
    unordered_set<int> hash;

    for(int i=0; i<n; i++)
        hash.insert(arr1[i]);

    for(int i=0; i<n; i++)
        hash.insert(arr1[i]);

    cout<<hash.size();
    
}

int main() {
    int arr1[] = {1, 1, 1, 4, 4, 5, 6, 7};
    int arr2[] = {7, 8, 6, 10, 1};
    int n=8, m=5;
    unionCount(arr1, arr2, n, m);
}
