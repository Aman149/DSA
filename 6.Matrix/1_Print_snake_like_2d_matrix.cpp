#include <bits/stdc++.h>
using namespace std;

const int m = 3;
const int n = 3;

void snakePattern(int arr[m][n]) {
    
    for(int i=0; i<m; i++) {

        if(i%2 == 0) {
            for(int j=0; j<n; j++)
            cout<<arr[i][j]<<" ";
        }

        else {
            for(int j=n-1; j>=0; j--)
            cout<<arr[i][j]<<" ";            
        }

        cout<<endl;
    }
}

int main() {
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    snakePattern(arr);
}