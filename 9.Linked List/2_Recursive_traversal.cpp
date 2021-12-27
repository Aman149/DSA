#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


void printNodes(Node *head) {
    if(head!= NULL){
        cout<<head->data<<" ";
        printNodes(head->next);
    }
}