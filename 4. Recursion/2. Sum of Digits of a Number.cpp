/*
You are given a number n. You need to find the sum of digits of n.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    // Complete this function
    int sumOfDigits(int n)
    {
        if(n==0)
            return 0;
        else
            return(n%10 + sumOfDigits(n/10));
    }
};

int main() {
    Solution s;
    cout<<s.sumOfDigits(10110);
}