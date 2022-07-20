/*
Check if a given string is palindrome or not recursively
Time complexity: O(N)
Space complexity: O(N)
*/

#include <iostream>
using namespace std;

bool checkPalindrome(string s, int i, int j) {
    
    if(i >= j)
        return true;
        
    else if(s[i] != s[j-i])
        return false;
        
    else
        return checkPalindrome(s, j-1, i+1);

}

int main() {
    string str = "GeeksskeeG";
    int n = str.size();
    cout<<checkPalindrome(str, 0, n-1);
}