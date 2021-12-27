#include <bits/stdc++.h>
using namespace std; 
const int MAX = 100;
 
void searchInRow(int mat[][MAX], int i, int row, int x) {
    int l = 0, h = row-1, mid;
    cout<<row-1<<" "<<i;
    while(l<=h) {
        mid = (l+h)/2;
        if(mat[i][mid] == x) {
            cout<<"Element Found";
            return;
        }
        if(mat[i][mid] > x)
            l = mid-1;
        if(mat[i][mid] < x)
            h = mid+1;
    }
    cout << "Element not found" << endl;
}

void sortedMatrixSearch(int mat[][MAX], int row, int col, int x) {
    int i=0, j=row-1, mid;
    while(i<=j) {
        mid = (i+j)/2;

        if(mat[mid][0] == x) {
            cout<<"Element Found";
            return;
        }
        
        if(mat[mid][col-1] == x) {
            cout<<"Element Found";
            return;
        }

        if( x > mat[mid][0] &&  x < mat[mid][col-1] ) {
            cout<<"INSIDE";
            searchInRow(mat, mid, row, x);
            return;
        }

        if(x > mat[mid][col-1])
            i=mid+1;
        if(x < mat[mid][0])
            j=mid-1;  
    }



}

int main()
{
    int n = 4, m = 5, x = 100;
    int mat[][MAX] = {{0, 6, 8, 9, 11},
                     {20, 22, 28, 29, 31},
                     {36, 38, 50, 61, 63},
                     {64, 66, 100, 122, 128}};
 
    sortedMatrixSearch(mat, n, m, x);
    return 0;
}

