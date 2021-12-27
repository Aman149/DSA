#include<iostream>
using namespace std;
/*
long long int fact(int n) {

    long long int ans=1;
    int f = n;
    while (f!=0)
    {
        ans = ans * f--;
    }
    
    return ans;
}
*/

//Using recurrsion
long long int fact(int n) {
    if(n == 0) return 1;

    return n*fact(n-1);
}

int main() {
    int input;
    cin>>input;
    cout<<fact(input);
    return 0;  
}