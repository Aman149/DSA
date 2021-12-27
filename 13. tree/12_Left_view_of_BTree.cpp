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

int maxheight = 0;

void left(Node *root, int currheight) {
    if(root == NULL)
        return;

    else {

        if(maxheight < currheight) {
            cout<<root->key<<" ";
            maxheight = currheight;
        }

        left(root->left, currheight+1);
        left(root->right, currheight+1);
    }
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    //root->left->left = new Node(40);
    //root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    root->right->right->left = new Node(100);
    left(root,1);
}