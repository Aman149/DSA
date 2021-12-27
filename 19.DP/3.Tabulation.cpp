// IT IS BOTTOM UP SOLUTION 
// WE leave recurrsion in this case
#include<iostream>
using namespace std;

int fibonacci(int n) {
    int fib[n+1];
    fib[0] = 0, fib[1] = 1;
    
    for(int i=2; i<=n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    return fib[n];
}

int main() {
    cout<<fibonacci(10);
    return 0;
}
