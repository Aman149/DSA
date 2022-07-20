/*
Print all the subsets of a given sering s 
NOTE: for a given string there are 2^N subsets

*/

#include <iostream>
using namespace std;

void allSubsets(string s, string curr="", int i=0) {

    if(i==s.size()){
        cout<<curr<<" ";
        return;
    }
    
    allSubsets(s,curr,i+1);
    allSubsets(s,curr+s[i],i+1);

}

int main() {
    string str = "Aman";
    allSubsets(str);
}