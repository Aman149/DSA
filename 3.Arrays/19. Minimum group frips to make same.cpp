#include<bits/stdc++.h>
using namespace std;

void flips(int arr[], int n) {
    int toFLipFlag = 0;

    for(int i=1; i<n; i++) {
        //to get from
        if(arr[i] != arr[0] && toFLipFlag == 0) {
            toFLipFlag = 1;
            cout<<"From "<<i;
        }

        else if(arr[0] == arr[i] && toFLipFlag == 1) {
            toFLipFlag = 0;
            cout<<" To "<<i-1<<endl; 
        }
    }
}

int main() {
    int arr[] = {1, 1, 0, 0, 0, 1, 1, 0, 0, 1};
    int n = 10;
    flips(arr, n);
}
