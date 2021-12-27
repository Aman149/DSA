/*
4 3 2 1  size = 4
at i=0         j< 4-0 
3 4 2 1  -- 0
3 2 4 1  -- 1
3 2 1 4  -- 2

at i=1         j< 4-1 
2 3 1 4  -- 0
2 1 3 4  -- 1

at i=2         j< 4-2 
1 2 3 4  -- 0

In Place / Stabe sorting Algo

Space Complextites: 
| Worst Case | Average Case | Best Case |
| ---------- | ------------ | --------- |
| O(n^2)     | (n^2)        | O(n)      |
| ---------- | ------------ | --------- |

Time Complexity O(1)

*/

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
    bool swaps;

    for(int i=0; i<=n-1; i++) {
        swaps = false; // For Best case
        for(int j=0; j<=n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swaps = true;
            }
        }
        //If it is already sorted
        if(swaps == false)
            break;
    }
}

int main() {
    int arr[] = {3, 4, 1, 9, 2, 6, 0};
    bubbleSort(arr,6);

    for(int i=0; i<7; i++) 
        cout<<arr[i]<<" ";
}