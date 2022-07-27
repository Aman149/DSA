#include<bits/stdc++.h>
using namespace std;

//Given an integer, we need to find floor of its square root

int binarySearch(int x) {
    
    int low = 0, high = x, ans = -1;

    while(low <= high) {
        int mid = (low+high)/2;

        if(mid*mid == x)
            return mid;
        else if(mid*mid > x)
            high = mid - 1;
        else {
            ans = mid;
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    cout<<binarySearch(92681);
}