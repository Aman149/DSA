#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n) {

    //res is the new size of our array
    // as the first element will always be counted res starts from 1
    int res = 1;

    //as first element is included we start from 1 to last element (n-1)
    for(int i=1; i<n; i++) {
        if(arr[i] != arr[i-1]) {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

int main() {
    int arr[] = {1, 1, 2, 2, 2, 3};
    int n = 6;
    n = removeDuplicates(arr, 6);
    for(int i=0; i<n ; i++)
        cout<< arr[i] <<" ";
}