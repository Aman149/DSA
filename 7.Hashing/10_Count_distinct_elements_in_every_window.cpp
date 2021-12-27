#include <bits/stdc++.h>
using namespace std;


    vector <int> countDistinct (int A[], int n, int k)
    {
        unordered_map <int, int> mp;
        vector<int> res; 
        //First we insert k elemnts in map with frequency
        for(int i=0; i<k; i++) {
            mp[A[i]]++;
        }
        //now we push size in res to get the distinct elements 
        res.push_back(mp.size()); 
        int j=0;
        //from this for loop we will keep on removing one element from starting and 
        //adding new elements in map and their frequencies
        // if older elements have freq zero then we erase that element which means that element is not present in curr window
        for(int i=k; i<n; i++) {
            mp[A[j]]--;  //delete previous window elements
            mp[A[i]]++;  //insert a new element 
            
            if(mp[A[j]] == 0)   // if freq of prev element is zero then remove the element
                mp.erase(A[j]);
            j++;          // increase the prev iterator
            res.push_back(mp.size()); // push the current size of map in res to get distinct elements
        }
        
        return res;
    }


int main() {
    int arr[] = { 5, 8, -4, -4 , 9, -2, -2};
    cout<<countDistinct(arr, 7, 0);
}