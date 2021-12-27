#include<bits/stdc++.h>
using namespace std;

int lastOccurance(int arr[], int n, int x) {
    int low=0, high = n-1, res = -1;

    while(low<=high) {
        
        int mid = (low + high) / 2;
        
        if(arr[mid]  > x)
            high = mid - 1;

        else if(arr[mid] < x)
            low = mid + 1;

        else {
            res = mid;
            low = mid + 1;
        }
    }
    
    return res;
}

int main() {
    int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    int n = sizeof(arr) / sizeof(int);
    cout<<lastOccurance(arr,n,2)+1;
}

/*
7
0  1  2  3  4  5  6
5 10 10 10 10 20 20
10

1st iteration 
mid = 0+6/2 = 3 = 10 at 3
low = 3 + 1 = 4
high = 7 - 1 = 6

2nd Iteration
mid = 4+6/2 = 5 = 20 at pos 5
low = 4
high = 5 - 1 = 4

3rd Iteration
mid = 4+4/2 = 4
return 4
------------------------------
7
0  1  2  3  4  5  6
5 10 10 10 10 10 10
10

mid = 0+6/2 = 3
low = 3+1 = 4
high = 6

mid = 4+6/2 = 5
low = 5+1 = 6
high = 6

mid = 6+6/2 = 6



*/

