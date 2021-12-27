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

bool check(Node *root) {

    // If root is null then Return 
    if(root == NULL)
        return true;
    // If no child is present
    if(root->left == NULL && root->right == NULL)
        return true;

    //If any of the child nodes exist then we check 
    int sum=0;

    //Add child nodes to sum 
    if(root->left != NULL)
        sum+= root->left->key;
    if(root->right != NULL)
        sum+= root->right->key;

    //check if sum is equal or not
    //And we recursively call for left and right subtrees
    return (root->key == sum && check(root->left) && check(root->right));

}


int main() {
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    cout<<check(root);
}