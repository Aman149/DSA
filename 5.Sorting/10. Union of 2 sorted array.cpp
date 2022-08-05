#include<bits/stdc++.h>
using namespace std;

vector<int> printIntersection(int arr1[], int arr2[], int n, int m) 
    { 
        vector<int> v;
        int i=0, j=0;
        while(i<n && j<m) {
            
            if(arr1[i] == arr1[i+1]) {
                i++;
                continue;
            }
                
            
            if(arr2[j] == arr2[j+1]) {
                j++;
                continue;
            }
                
            
            if(arr1[i] < arr2[j])
                v.push_back(arr1[i++]);
            
            else if(arr2[j] < arr1[i])
                v.push_back(arr2[j++]);
            
            else {
                v.push_back(arr1[i]);
                i++;
                j++;
            }
        }
        
        while(i<n) {
            if(arr1[i] != arr1[i+1])
                v.push_back(arr1[i]);
            i++;
        }
        
        while(j<m){
            if(arr2[j] != arr2[j+1])
                v.push_back(arr2[j]);
            j++;
        }
        
        return v;
    }

int main() {
    int arr1[] = {1, 2, 3, 4}, arr2[] = {2, 4, 6, 7, 8};
    vector<int> v = printIntersection(arr1, arr2, 4, 5);

    for(int x : v)
        cout<<x<<" ";
}