/* Hasing can be implemented using:
Linked List
Dynamic size Array
Self Balancing Binary Tree
*/
#include <bits/stdc++.h>
using namespace std;
struct MyHash {
    int BUCKET ; 
    list<int> *table;
    MyHash(int b) {
        BUCKET = b;
        table = new list<int>[b];
    }

    void insert(int key) {
        int i=key%BUCKET;
        table[i].push_back(key);
    }
    bool search(int key) {
        int i=key%BUCKET;
        for(auto x:table[i])
            if(x==key)
                return true;
        return false;
    }
    void remove(int key) {
        int i=key%BUCKET;
        table[i].remove(key);
    }
}