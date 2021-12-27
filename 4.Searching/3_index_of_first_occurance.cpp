#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int x) {
    
    int start = 0, end = 8;
    while(start < end) {  
        
        int mid = start+end/2;
        
        if(arr[mid] == x)
            return mid+1;
        
        else if(arr[mid] > x)
            end = mid - 1;

        else{
            if(mid == 0 || arr[mid - 1] != arr[mid] ) 
                return mid;
            else
                end = mid - 1;
        }
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    cout<<binarySearch(arr, 5);
}