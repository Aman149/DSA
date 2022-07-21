#include<bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n) {
    int index = 0;

    for(int i=1; i<n; i++) {
        if(arr[i] > arr[index])
            index = i;
    }

    return index;
}

int main() {
    int arr[] = {5, 8, 20, 10};
    cout<<largestElement(arr, 4);
}