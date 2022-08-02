#include<bits/stdc++.h>
using namespace std;

void print(vector<int> arr) {
    for(int it : arr)
        cout<<it<<" ";
}

void bubbleSort(vector<int> arr) {
    int n = arr.size();
    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-i-1; j++) 
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
    print(arr);
}

int main() {
    vector<int> arr = {10, 20, 5, 7};
    bubbleSort(arr);
    
}