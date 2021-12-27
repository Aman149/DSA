#include<bits/stdc++.h>
using namespace std;

void findIntersection(int arr1[], int arr2[], int n, int m) {
    int i=0, j=0;

    while(i<n && j<m) {
        if(arr1[i] > arr2[j])
            j++;
        else if(arr2[j] > arr1[i])
        i++;

        else {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
}

int main() {
    int arr1[] = {1,2,3,4,5,6,7};
    int arr2[] = {2,5,6,7};
    findIntersection(arr1, arr2, 7, 4);
}