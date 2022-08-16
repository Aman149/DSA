#include<bits/stdc++.h>
using namespace std;

void frequency(int arr[], int n) {

    map<int, int> hash;
    for(int i=0; i<n; i++)
        hash[arr[i]]++;

     for(auto x : hash) 
        cout<<x.first<<" "<<x.second<<endl;
}

int main() {
    int arr[] = {1, 1, 1, 4, 4, 5, 6, 7};
    int n = 8;
    frequency(arr, n);
}
