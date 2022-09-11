#include<bits/stdc++.h>
using namespace std;

bool maxOccuring(int arrL[], int arrR[], int n) {
    int arr[1000];
    memset(arr, 0, sizeof(arr));

    for(int i=0; i<n; i++) {
        arr[arrL[i]]++;
        arr[arrR[i]+1]--;
    }
    
    int maxVal = arr[0], ans = 0;
    for(int i=1; i<1000; i++) {
        arr[i] += a[i-1];
        if(maxVal < arr[i]) {
            maxVal = arr[i];
            ans = i;
        }
    }

    return ans;
}

int main() {
    int arr1[] = {1, 2, 3}; int n = 3;
    int arr2[] = {3, 5, 7};
    cout<<maxOccuring(arr1, arr2, n);
}
