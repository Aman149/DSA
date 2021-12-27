// We start with solving a basic fibonacci problem using recurrsion
//it prints the nth fibonacci number starting form 1s.
#include<iostream>
using namespace std;

int fibonacci(int n) {
    if(n==0 || n==1)
        return n;
    else
        return (fibonacci(n-1)+fibonacci(n-2));
}

int main() {
    int n=6;
    cout<<fibonacci(n);
}

//It is working fine considering 
// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 ....
