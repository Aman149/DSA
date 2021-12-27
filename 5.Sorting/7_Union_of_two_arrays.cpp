#include<bits/stdc++.h>
using namespace std;

void findUnion(int arr1[], int arr2[], int n, int m) {
    int i=0, j=0;

    while(i<n && j<m) {
        if(arr1[i] < arr2[j])
            cout<<arr1[i++]<<" ";

        else if(arr2[j] < arr1[i])
            cout<<arr2[j++]<<" ";

        else {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
}

int main() {
    int arr1[] = {2,10,20,20};
    int arr2[] = {3,20,40};
    findUnion(arr1, arr2, 4,3);
}