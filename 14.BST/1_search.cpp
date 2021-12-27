#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

bool search(Node *root, int x) {
    if(root == NULL)
        return false;
    else if(root->key == x)
        return true;
    else if(root->key > x)
        return search(root->left, x);
    else
        return search(root->right, x);
}


int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->right = new Node(40);
    root->right->left = new Node(25);
    cout<<search(root, 40);

    
}