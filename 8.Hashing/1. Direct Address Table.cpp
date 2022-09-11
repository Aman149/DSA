#include<bits/stdc++.h>
using namespace std;
int arr[1000] = {0};

void insert(int x) {
    arr[x]++;
}

int search(int x) {
    
    if(arr[x] > 0)
        return x;
    else
        return -1;
}

int main() {
    
    insert(10);
    insert(20);
    insert(119);
    
    cout<<search(119);
}
