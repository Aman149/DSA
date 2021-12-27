//Count Digits of a given number

#include<iostream>
using namespace std;

int countDigits(int x) {
    int ans=0;
    while (x > 0) {
        x = x/10;
        ans++;
    }

    return ans;
}


int main() {
    int input;
    cin>>input;
    cout<<countDigits(input);
    return 0;
}