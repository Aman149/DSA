/*
1  2  3
4  5  6
7  8  9

output 1 2 3 6 9 8 7 4
*/

#include <bits/stdc++.h>
using namespace std;
const int m = 3;
const int n = 3;
void snakePattern(int arr[m][n]) {

    if(m==1) {
        for(int i=0; i<m; i++)
            cout<<arr[0][i]<<" ";
    }

    else if(n == 1) {
        for(int i=0; i<m; i++)
            cout<<arr[i][0]<<" ";
    }

    else {
        for(int i=0; i<m; i++)
            cout<<arr[0][i]<<" ";
        
        for(int i=1; i<m; i++)
            cout<<arr[i][n-1]<<" ";

        for(int i=n-2; i>=0; i--)
            cout<<arr[m-1][i]<<" ";
        
        for(int i=m-2; i>0; i--)
            cout<<arr[i][0]<<" ";
    }
}

int main() {
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    snakePattern(arr);
}