#include<bits/stdc++.h>
using namespace std;

int naivePartition(vector<int> arr, int low, int high, int p) {
    int temp[high-low+1], index = 0;
    
    for(int i=low; i<=high; i++)
        if(arr[i] < arr[p])
            temp[index++] = arr[i];


    for(int i=low; i<=high; i++)
        if(arr[i] == arr[p])
            temp[index++] = arr[i];

    int res = low+index-1;

    for(int i=low; i<=high; i++)
        if(arr[i] > arr[p])
            temp[index++] = arr[i];
    
    for(int i=low; i<=high; i++)
        arr[i] = temp[i-low];
        
    return res;

}

int main() {
    vector<int> arr {1, 10, 7, 5, 3, 2, 12};
    cout<<naivePartition(arr, 0, arr.size(), 4);
}