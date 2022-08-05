#include<bits/stdc++.h>
using namespace std;

vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
    { 
        vector<int> ans;
        int i=0, j=0;
        while(i<N && j<M) {
            
            if(arr1[i] == arr1[i+1])
                i++;
                
            else if(arr2[j] == arr2[j+1])
                j++;
            
            else if(arr1[i] == arr2[j]) {
                ans.push_back(arr1[i]);
                i++;
                j++;
            }
            
            else if(arr1[i] < arr2[j]) 
                i++;
            
            else
                j++;
        }
        if(ans.size() == 0)
            ans.push_back(-1);
        return ans;
    }

int main() {
    int arr1[] = {1, 2, 3, 4}, arr2[] = {2, 4, 6, 7, 8};
    vector<int> v = printIntersection(arr1, arr2, 4, 5);

    for(int x : v)
        cout<<x<<" ";
}