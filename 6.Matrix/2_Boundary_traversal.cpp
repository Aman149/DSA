/*
1  2  3
4  5  6
7  8  9

output 1 2 3 6 9 8 7 4
*/

#include <bits/stdc++.h>
using namespace std;
const int row = 3;
const int col = 3;
void snakePattern(int arr[row][col]) {

    if(row == 1) {
        for(int i=0; i<row; i++)
            cout<<arr[0][i]<<" ";
    }

    else if(col == 1) {
        for(int i=0; i<row; i++)
            cout<<arr[i][0]<<" ";
    }

    else {
        for(int i=0; i<row; i++)
            cout<<arr[0][i]<<" ";
        
        for(int i=1; i<row; i++)
            cout<<arr[i][col-1]<<" ";

        for(int i=col-2; i>=0; i--)
            cout<<arr[row-1][i]<<" ";
        
        for(int i=row-2; i>=1; i--)
            cout<<arr[i][0]<<" ";
    }
}

int main() {
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    snakePattern(arr);
}