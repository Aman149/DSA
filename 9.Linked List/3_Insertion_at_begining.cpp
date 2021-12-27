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

Node insertNode(Node *head, int x) {
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}