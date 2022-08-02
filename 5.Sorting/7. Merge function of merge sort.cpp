#include<bits/stdc++.h>
using namespace std;

void print(vector<int> arr1) {
    for(int it : arr1)
        cout<<it<<" ";
}

void merge(vector<int> arr1, int low, int mid, int high) {
    int n1 = mid-low+1, n2 = high-mid;
    int left[n1], right[n2];

    for(int i=0; i<n1; i++)
        left[i] = arr1[low+i];

    for(int j=0; j<n2; j++)
        right[j] = arr1[mid+1+j];
    
    int i=0, j=0, k=low;

    while(i<n1 && j<n2){
        
        if(left[i]<=right[j])
            arr1[k++]=left[i++];
            
        else
            arr1[k++]=right[j++];
    }

    while(i<n1)
        arr1[k++] = left[i++];

    while(j<n2)
        arr1[k++] = right[j++];
        
    print(arr1);
}

int main() {
    vector<int> arr1 = {10,15,20,40,8,11,15,22,25};
    merge(arr1, 0, 3, 8);
}