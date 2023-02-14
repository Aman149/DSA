#include<bits/stdc++.h>
using namespace std;

void print(vector<int> arr) {
    for(int it : arr)
        cout<<it<<" ";
}

void selectionSort(vector<int> arr) {
    int n = arr.size();
    for(int i=0; i<n; i++) {
        int temp = i;
        for(int j=i+1; j<n; j++)
            if(arr[j] < arr[temp])
                temp = j;
        swap(arr[i], arr[temp]);
    }
    print(arr);
}

int main() {
    vector<int> arr = {10, 20, 5, 7};
    selectionSort(arr);
    
}