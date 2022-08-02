#include<bits/stdc++.h>
using namespace std;

void print(vector<int> arr) {
    for(int it : arr)
        cout<<it<<" ";
}

void InsertionSort(vector<int> arr) {
    int n = arr.size();
    for(int i=1; i<n; i++) {
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    print(arr);
}

int main() {
    vector<int> arr = {10, 20, 5, 7};
    InsertionSort(arr);
    
}