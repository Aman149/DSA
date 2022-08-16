#include<bits/stdc++.h>
using namespace std;

int countDistinct(int arr[], int n) {

    unordered_set<int> hash;
    for(int i=0; i<n; i++)
        hash.insert(arr[i]);

    return hash.size();
}

int main() {
    int arr[] = {1, 1, 1, 4, 4, 5, 6, 7};
    int n = 8;
    cout<<countDistinct(arr, n);
}
