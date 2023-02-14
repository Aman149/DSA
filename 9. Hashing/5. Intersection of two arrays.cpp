#include<bits/stdc++.h>
using namespace std;

void intersection(int arr1[], int arr2[], int n, int m) {
    unordered_set<int> hash;

    for(int i=0; i<n; i++)
        hash.insert(arr1[i]);

    int count = 0;
    for(int i=0; i<m; i++) {
        if(hash.find(arr2[i]) != hash.end())
            count++;
    }

    cout<<count;
    
}

int main() {
    int arr1[] = {1, 1, 1, 4, 4, 5, 6, 7};
    int arr2[] = {7, 8, 6, 10, 1};
    int n=8, m=5;
    intersection(arr1, arr2, n, m);
}
