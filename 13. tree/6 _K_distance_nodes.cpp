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

void distance(Node *root, int k, vector<int> &res) { //RES to store k distanced nodes and print them to screen 
    
    if(root == NULL) // First check if root is null
        return;
    if(k == 0)  // if K(height of the tree) is zero i.e. we are at k node then push result to res
        res.push_back(root->key);
    else { // here we iterate in left and right subtrees with decreasing the k i.e. we are going down in the tree
        distance(root->left, k-1, res);  // exploring the left sub-tree
        distance(root->right, k-1, res); // exploring the right sub-tree
    }
}

vector<int> kDistance(Node *root, int k)
{
  // we are using a utility function distance to find k distanced nodes
  vector<int> res;
  distance(root, k, res); // calling the utility function to get result
  return res;
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->left->left->left = new Node(60);
    vector<int> res = kDistance(root, 2);
}