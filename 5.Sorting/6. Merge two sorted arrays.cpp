#include<bits/stdc++.h>
using namespace std;

void mergeTwoSortedArrays(vector<int> arr1, vector<int> arr2) {
    int n1 = arr1.size(), n2 = arr2.size();
    int i=0, j=0;
    while(i<n1 && j<n2) {
        if(arr1[i] <= arr2[j])
            cout<<arr1[i++]<<" ";
        else 
            cout<<arr2[j++]<<" ";
    }

    while(i<n1)
        cout<<arr1[i++]<<" ";

    while(j<n2)
        cout<<arr2[j++]<<" ";

}

int main() {
    vector<int> arr1 = {10, 15, 20, 20}, arr2 = {1, 12};
    mergeTwoSortedArrays(arr1, arr2);
}