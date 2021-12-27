#include <bits/stdc++.h>
using namespace std;

void distinct(int arr[],int n) {
    unordered_map<int,int> m;

    for(int x=0; x<n; x++) 
        m[arr[x]]++;

    for(auto e:m) 
        cout<<e.first<<" "<<e.second<<endl;
}

int main() {
    int arr[] = {4,5,6,6,7,1,2,2,2,2};
    distinct(arr,10);
}