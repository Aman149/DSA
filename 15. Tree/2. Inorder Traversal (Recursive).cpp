//           10
//          /   \
//       20      30
//      /  \
//   40      50

#include <iostream>
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
//Print left Root Right 
void inorderTraversal(Node *root) {
    if(root != NULL) {
        inorderTraversal(root->left);
        cout<<root->key<<" ";
        inorderTraversal(root->right);
    }
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    inorderTraversal(root);
}