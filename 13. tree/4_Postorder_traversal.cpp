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
void dfsPostorder(Node *root) {
    if(root != NULL) {
        dfsPostorder(root->left);
        dfsPostorder(root->right);
        cout<<root->key<<" ";
    }
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    dfsPostorder(root);
}