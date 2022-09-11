#include<bits/stdc++.h>
using namespace std;

int maxDiff(int arr[], int n) {

    int currDif = 0, minVal = arr[0];

    for(int i=1; i<n; i++) {
        currDif = max(currDif, arr[i]-minVal);
        minVal = min(minVal, arr[i]);
    }

    return currDif;

}

int main() {
    int arr[] = {7, 10, 4, 3, 6, 5, 2};
    int n = 7;
    cout<<maxDiff(arr, n);
}