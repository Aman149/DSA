#include<bits/stdc++.h>
using namespace std;

int evenOdd(int arr[], int n) {
    int len = 1;
    int res = 1;

    for(int i=0; i<n-1; i++) {
        if((arr[i]%2 == 0 && arr[i+1]%2 != 0) || (arr[i]%2 != 0 && arr[i+1]%2 == 0)) {
            res = max(res, len);
            len++;
        }
  
        else
            len = 1;
    }

    return res;
}

int main() {
	
     int arr[] = {10, 12, 14, 7, 8}, n = 5;
     cout<<evenOdd(arr, n);
}