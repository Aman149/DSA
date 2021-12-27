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

int maxWidth(Node *root, int currlevel) {
    
}

//Main function to create Btree
int main()
{
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(22);
    //root->left->left = new Node(3);
    //root->left->right = new Node(10);
    root->right->left = new Node(21);
    root->right->right = new Node(25);
    //root->right->right->right = new Node(36);
    cout<<maxWidth(root,1);
    
}