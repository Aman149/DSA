/*
You are given a number n. You need to find the digital root of n. 
DigitalRoot of a number is the recursive sum of its digits until 
we get a single digit number.
*/
#include<iostream>
using namespace std;

int digitalRoot(int n)
{
    int digitalRootAns = 0;
    
    while(n>0) {
        digitalRootAns += n%10; 
        n/=10;
    }
    
    if (digitalRootAns < 10)
        return digitalRootAns;
    else
        digitalRoot(digitalRootAns);
}

int main() {
    int n=16;
    cout<<DigitalRoot(n);
}