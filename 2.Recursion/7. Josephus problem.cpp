#include <iostream>
using namespace std;

int josephus(int n, int k) {

    //Base case
    if(n==1)
        return 1;
    //To get the possible ans
    else
        return (josephus(n-1, k) + k-1 )%n + 1;
}

int main() {
    cout<<josephus(7,3);
}