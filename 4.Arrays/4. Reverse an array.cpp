#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n) {
    
    int low = 0, high = n-1;

    while(low <high) {
        swap(arr[low++], arr[high--]);
    }
}

int main() {
    int arr[] = {1, 2, 10, 20, 100, 11};
    reverse(arr, 6);
    for(int i=0; i<6 ; i++)
        cout<< arr[i] <<" ";
}