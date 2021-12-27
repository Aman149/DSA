/*

Input
1  2  3
4  5  6
7  8  9

output 

1  4  7
2  5  8
3  6  9
*/

#include <bits/stdc++.h>
using namespace std;
const int m = 3;
const int n = 3;
void snakePattern(int arr[m][n]) {
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++)
            cout<<arr[j][i]<<" ";
        cout<<endl;
    }
}

int main() {
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    snakePattern(arr);
}