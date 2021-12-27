/*

Input
1  2  3
4  5  6
7  8  9

output 
3  6  9
2  5  8
1  4  7

if we are returning then :**
*/

#include <bits/stdc++.h>
using namespace std;
const int m = 3;
const int n = 3;
void snakePattern(int arr[m][n]) {
    for(int i=m-1; i>=0; i--) {
        for(int j=0; j<n; j++) 
        /* temp[n-j-1][i] = arr[i][j] */
            cout<<arr[j][i]<<" ";
        cout<<endl;
    }
}

int main() {
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    snakePattern(arr);
}