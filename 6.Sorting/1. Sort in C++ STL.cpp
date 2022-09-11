#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {10, 20, 5, 7};
    int n = 4;

    //Sorting using STL in ASC Order
    sort(arr, arr+n);
    for(int it : arr)
        cout<<it<<" ";
    
    //Sorting using STL in DESC Order
    cout<<endl;
    sort(arr, arr+n, greater<int>());
    for(int it : arr) 
        cout<<it<<" ";
}