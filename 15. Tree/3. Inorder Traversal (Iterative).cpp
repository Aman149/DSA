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
//Print left Root Right 
void inorderTraversal(Node *root) {
    vector<int> inorder;
    if(root == NULL)
        return;
        
    stack<Node*> st;
    Node *curr = root;
        
    while(true) {
        if(curr != NULL) {
            st.push(curr);
            curr = curr -> left;
        }
        else {
            if(st.empty() == true) break;
            curr = st.top();
            st.pop();
            inorder.push_back(curr->key);
            curr = curr -> right;
        }
    }

    for(auto node : inorder)
        cout<<node<<" ";
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    inorderTraversal(root);
}