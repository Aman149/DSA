#include<iostream>
using namespace std;

int lcs(string s1, string s2, int i, int j) {
    if(i == 0 || j == 0) {
        return 0;
    }

    if(s1[i-1] == s2[j-1])
        return 1+lcs(s1, s2, i-1, j-1);

    else
        return max(lcs(s1, s2, i-1, j), lcs(s1, s2, i, j-1));
}

int main() {
    string s1 = "Aman", s2 = "Am";
    cout<<lcs(s1, s2, 4, 2);
    return 0;
}