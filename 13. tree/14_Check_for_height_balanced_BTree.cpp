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

int checkForBalanceBtree(Node *root) {

    if(root == NULL)
        return 0;
    int lh = checkForBalanceBtree(root->left);
    if(lh == -1)
        return -1;

    int rh = checkForBalanceBtree(root->right);
    if(rh == -1)
        return -1;
    
    if(abs(lh-rh) > 1)
        return -1;

    return max(lh,rh)+1;
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
    cout << checkForBalanceBtree(root);
}