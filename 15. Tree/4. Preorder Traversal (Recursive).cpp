//           10
//          /   \
//       20      30
//      /  \
//   40      50

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
//Print root left right
void preorderTraversal(Node *root) {
    if(root == NULL)
        return;
    
    cout<<root->key<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    preorderTraversal(root);
}