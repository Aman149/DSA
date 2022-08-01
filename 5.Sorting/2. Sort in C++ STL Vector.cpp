#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 5, 7};

    //Sorting using STL in ASC Order
    sort(v.begin(), v.end());
    for(int it : v)
        cout<<it<<" ";
    
    //Sorting using STL in DESC Order
    cout<<endl;
    sort(v.begin(), v.end(), greater<int>());
    for(int it : v) 
        cout<<it<<" ";
}