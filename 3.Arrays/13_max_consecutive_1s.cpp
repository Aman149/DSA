#include<iostream>
using namespace std;

int longestOne(int arr[], int n) {

    int count = 0, ans=-1;

    for(int i=0; i<n; i++) {
        if(arr[i] == 1){
            count++;
            ans = max(ans, count);
        }

        if(arr[i] == 0)
            count = 0;
    }
    return ans;
}

int main() {
    int arr[] = {1,0,1,1,1,0,0,0,1,1};
    cout<<longestOne(arr, 10);
}