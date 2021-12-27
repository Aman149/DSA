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

// Recursive insert
Node *insert(Node *root ,int n) {

    if(root == NULL)
        return new Node(n);

    else if(root->key < n)
        root->right = insert(root->right, n);
    
    else if(root->key > n)
        root->left = insert(root->left, n);
    
    return root;
}

//Iterative insert
void insertIt(Node *root, int x) {
    if(root == NULL)
        return new Node(x);

    while(root != NULL) {

        if(root->key < x)
            root = root->right;
        else if(root->key > x)
    }
}

//Print Function
void print(Node *root) {
    if(root == NULL)
        return;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(q.size() > 1) {
        Node *curr = q.front();
        q.pop();

        if (curr == NULL)
        {
            cout << endl;
            q.push(NULL);
            continue;
        }

        cout<<curr->key<<" ";
        if(curr->left !=  NULL)
            q.push(curr->left);
        if(curr->right != NULL)
            q.push(curr->right);

    }
}

// Utility for delete
Node *getSuccessor(Node *curr) {
    curr  = curr->right;
    while(curr != NULL && curr->left != NULL) 
        curr = curr->left;
    return curr;
}

//Delete node Function 
Node * delete(Node *root, int x) {
    if(root == NULL)
        return root;

    else if(root->key > x)
        root->left = delete(root->left, x);
    else if(root->key < x)
        root->right = delete(root->right, x);
    else {
        if(root->left == NULL) {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        else if(root->right == NULL) {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        else {
            Node *succ = getSuccessor(root);
            root->key = succ->key;
            root->right = delete(root->right, succ->key);
        }

        return root;
    }
}

//Get floor value
Node *floor(Node *root, int x) {
    Node *res = NULL;
    if(root == NULL)
        return NULL;

    while(root!= NULL) {
        if(root->key == x)
            return root;
        
        else if(root->key > x)
            root = root->left;

        else {
            res = root;
            root = root->right;
        }
           
    }

    return res;
}

//Get ceiling  value
Node *celi(Node *root, int x) {
    Node *res = NULL;
    
    if(root == NULL)
        return NULL;

    while(root != NULL) {

        if(root->key == x)
            return root;

        else if(root->key < x)
            root = root->right;
        
        else {
            res = root;
            root = root->left;
        }
    }

    return res;
}

//Check for BST
bool check(Node *root, int min, int max) {

    if(root == NULL)
        return true;
    
    return (
        root->key > min && 
        root->key < max && 
        check(root->left, min, root->key) && 
        check(root->right, root->key, max)
    );
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    //root->right->right = new Node(40);
    //root->right->left = new Node(25);
    //root = insert(root, 50);
    //print(root);
    //root = insert(root, 5);
    //print(root);
    //Node *opt = celi(root, 10);
    //cout<<opt->key;
    //cout<<check(root, INT_MAX, INT_MIN);
}