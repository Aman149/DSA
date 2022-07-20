/*
Print the maximum pieces in which the rope can be cut
NOTE: this question has a better solution in DP
Time complexity: O(3^N) i.e because we have 3^N leaves in this !!!
Space complexity: O(N) 
*/

#include <iostream>
using namespace std;

int maxPieces(int rope, int p1, int p2, int p3) {
    
    if(rope==0)
        return 0;
    if(rope < 0)
        return -1;

    int possibleAns = max(maxPieces(rope-p1, p1, p2, p3), 
                          max(maxPieces(rope-p2, p1, p2, p3),
                          maxPieces(rope-p3, p1, p2, p3)));

    if(possibleAns < 0)
        return -1;
        
    return possibleAns+1;
}

int main() {
    int rope, p1, p2, p3;
    rope = 23;
    p1 = 12;
    p2 = 14;
    p3 = 11;

    cout<< maxPieces(rope, p1, p2, p3);

}