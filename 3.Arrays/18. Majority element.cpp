#include<bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int n) {

    //to find a candidate
    int index = 0, count = 1;
    for(int i=1; i<n; i++) {
        if(arr[index] == arr[i])
            count++;
        else
            count--;
        if(count == 0) {
            index = i;
            count = 1;
        }
    }

    //Check if candidate is majority or not
    count = 0;
    for(int i=0; i<n; i++) {
        if(arr[index] == arr[i])
            count++;
    }
    
    if(count < n/2)
        index = -1;
    return index;
}

int main() {
	
     int arr[] = {6, 5, 6, 6, 2}, n = 5;
     cout<<majorityElement(arr,n);
}