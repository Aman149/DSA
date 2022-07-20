/*
You are given a number n. You need to find the count of digits in n.
*/
#include <stdio.h>
int countDigits(int n)
{
   //Your code here
   int count = 0;
   
   if(n == 0)
    return 1;
   while(n>0) {
       n=n/10;
       count++;
   }
   return count;
}

int main() {
    cout<<countDigits(100012);
}