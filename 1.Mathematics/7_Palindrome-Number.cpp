#include<iostream>
using namespace std;

bool Pallindrome(int num) {
    int rev = 0;
    int temp = num;

    while(temp !=0) {
        int lastDigit = temp%10;
        rev = rev*10 + lastDigit;
        temp = temp / 10;
    }

    return(rev == num);
}

int main() {
    int input;
    cin>>input;
    cout<<Pallindrome(input);
    return 0;
}