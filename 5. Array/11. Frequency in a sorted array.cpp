#include<bits/stdc++.h>
using namespace std;

void freq(int arr[], int n) {

    int count = 1;
    for(int i=1; i<n; i++) {

        if(arr[i] == arr[i-1])
            count++;
        
        else {
            cout<<arr[i-1]<<" "<<count<<endl;
            count = 1;
        }
    }
    
    cout<<arr[n-1]<<" "<<count<<endl;
}

int main() {
    int arr[] = {10, 10, 10, 25, 30, 30};
    int n = 6;
    freq(arr, n);
}
