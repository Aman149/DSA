#include<iostream>
using namespace std;

bool checkSorted(int arr[], int n) {

    bool ans = 1;

    for(int i=0; i<n-1; i++) {
        if(arr[i] > arr[i+1])
            ans = 0;
    }
    return ans;
}

int main() {
    int arr[] = {1,5,12,12,60};
    cout<<checkSorted(arr, 5);
}
