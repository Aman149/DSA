#include <bits/stdc++.h>
using namespace std;

struct Node
{   
    int key;
    Node *left;
    Node *right;
    Node (int x) {
        key = x;
        left = right = NULL;
    }
};

int height(Node *root) {
    if(root == NULL)
        return 0;
    else
        return max(height(root->left), height(root->right))+1;
}

void kDistance(Node *root, int k) {
    if(root == NULL)
        return;

    if(k == 0)
        cout<<root->key<<" ";
    
    else {
        kDistance(root->left, k-1);
        kDistance(root->right, k-1);
    }
}

void bfs(Node *root) {
    int h = height(root);
    for(int i=0; i<h; i++) {
        kDistance(root, i);
    }
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    bfs(root);
}