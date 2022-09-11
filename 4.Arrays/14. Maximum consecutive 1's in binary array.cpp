#include<bits/stdc++.h>
using namespace std;

int maxCon(int arr[], int n) {

    int currOne = 0, maxOne = 0;

    for(int i=0; i<n; i++) {

        if(arr[i] == 1)
            currOne++;

        else if(currOne > 0 && arr[i] == 0) {
            maxOne = max(maxOne, currOne);
            currOne = 0;
        }

    }

    return maxOne;
}

int main() {
    int arr[] = {0, 1, 1, 0, 1, 0};
    int n = 6;
    cout<<maxCon(arr, n);
}
