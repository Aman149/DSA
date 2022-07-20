/*
Print towe of Hanoi of given number N
*/


#include <iostream>
using namespace std;
int totalMoves = 0;
int toh(int N, int from, int to, int aux) {

    //Base case if N==1
    if(N == 1) {
        cout<<"Move Disc 1 from rod "<<from<<" to rod "<<to<<endl;
        totalMoves++;
        return totalMoves;
    }
    toh(N-1, from, aux, to);
    cout<<"Move Disc "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
    toh(N-1, aux, to, from);
}

int main() {
    cout<<toh(2,1,2,3);
}