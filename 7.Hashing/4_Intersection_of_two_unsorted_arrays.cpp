#include <bits/stdc++.h>
using namespace std;

void distinct(int arr1[],int arr2[],int m,int n) {
    unordered_set<int> s(arr1, arr1+m);

    for(int i=0; i<n; i++) {
        if(s.find(arr2[i]) != s.end())  {
            cout<<arr2[i]<<" ";
            s.erase(arr2[i]);
        }
    }
}

int main() {
    int arr1[] = {4,5,6,6,7,1,2,2,2,2};
    int arr2[] = {6,6,7,1,2,2,2,2};
    distinct(arr1,arr2,10,8);
}