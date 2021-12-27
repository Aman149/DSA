/*
Prints LOG base 2 of a number
Using Recursion.
*/
#include<iostream>
using namespace std;

int fun(int n) {
    if(n==1) 
        return 0;

    else 
        return 1+ fun(n/2);

}

int main() {
    int n=16;
    cout<<fun(n);
}