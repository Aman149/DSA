#include<bits/stdc++.h>
using namespace std;

bool check(int arr[], int n) {
    
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1])
            return false;
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 10, 20, 100, 11};
    cout<<check(arr, 6);
}