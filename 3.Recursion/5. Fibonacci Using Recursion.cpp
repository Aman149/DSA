/*
You are given a number n. You need to find nth Fibonacci number.
F(n)=F(n-1)+F(n-2); where F(1)=1 and F(2)=1
*/
#include<iostream>
using namespace std;

int fibonacci(int n){
        //Your code here
        if(n <= 1)
            return n;
        
        return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n = 5;
    cout<<fibonacci(n);
}