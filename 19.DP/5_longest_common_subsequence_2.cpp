// Now by memo
#include<iostream>
using namespace std;
 
#define N 10
#define M 10
const int NIL = -1;
int lookup_table[M][N];

void init() {
    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++)
            lookup_table[i][j] = NIL;
    }
}

int lcs(string s1, string s2, int i, int j) {

    if(lookup_table[i][j] != -1)
        return lookup_table[i][j];

    if(i == 0 || j == 0)
        lookup_table[i][j] = 0;

    else {
        if(s1[i-1] == s2[j-1])
            lookup_table[i][j] = 1+lcs(s1, s2, i-1, j-1);
        
        lookup_table[i][j] = max(lcs(s1, s2, i-1, j),lcs(s1, s2, i, j-1));
    }

    return lookup_table[i][j];
}

int main() {
    init();
    string s1 = "Aman", s2 = "Am";
    cout<<lcs(s1, s2, 4, 2);
    return 0;
}