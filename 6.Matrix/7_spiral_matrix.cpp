#include <bits/stdc++.h>
using namespace std;

#define R 4
#define C 4
void spiralMat(int arr[R][C], int row, int col) {

        int top = 0, left = 0, bottom = row - 1, right = col - 1;
        while(top <= bottom && left <= right ) {
            
            //Top row
            for(int i=left; i<=right; i++) 
                cout<<arr[top][i]<<" ";
            top++;
            
            //Right col
            for (int i=top; i <= bottom; i++)
                cout<<arr[i][right]<<" ";
            right--;

            //Bottom Row rev order
            if(top <= bottom) {
                for (int i = right; i >= left; i--)
                    cout<<arr[bottom][i]<<" ";
                bottom--;
            }

            //Left Col reverse order
            if(left <= right) {
                for (int i = bottom; i >= top; i--)
                    cout << arr[i][left] << " ";
                left++;
            }
    }
}

int main() {
    int a[R][C] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12},
                   {13, 14, 15, 16}};

    // Function Call
    spiralMat(a, R, C);
}