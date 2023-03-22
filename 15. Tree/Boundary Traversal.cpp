#include <iostream>

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

void left(Node* root) {
        if(root == NULL)
            return;
        left(root->left);
         if(root->left == NULL)
                     
}

vector<int> boundary(Node* root) {

}

int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    vector<int> ans = boundary(root);

    for(auto x : ans) {
        cout<<x<<" ";
    }
}
