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


Node *inorder(Node *root) {

    //Static to access it throughout the function calls
    static Node *prev = NULL;

    if(root == NULL)
        return root;
    
    Node *head = inorder(root->left);

    if(prev == NULL) 
        head = root;

    else {
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    inorder(root->right);
    return head;
}

void print(Node *root) {
    Node *curr = root;
    while(curr != NULL) {
        cout<<curr->key<<" ";
        curr = curr->right;
    }
}

/*
        10
       /  \
    20      30
   /  \    /  \
  40  50  60  70

*/

int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    root = inorder(root);
    print(root);
}
