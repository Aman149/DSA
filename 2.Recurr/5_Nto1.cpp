/*
Prints N to 1 Using recursion
*/
#include<iostream>
using namespace std;

int fun(int n) {
    if(n<1) 
        return 0;

    cout<<n<<" ";
    return fun(n-1);
}

int main() {
    int n = 5;
    fun(n);
}