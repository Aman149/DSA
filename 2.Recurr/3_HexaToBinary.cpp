/*
Prints Hexadecimal to Binary
*/
#include<iostream>
using namespace std;

void fun(int x) {
    if(x == 0)  
        return;
    
    else
        fun(x/2);
    cout<<x%2;
}

int main() {
    int n = 7;
    fun(n);
}