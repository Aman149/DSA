#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *prev;
    Node *next;
    Node(int x) {
        data = x;
        prev = NULL;
        next = NULL;
    }
}

Node insertAtBeg(Node *head, int x) {

    Node *temp = new Node(x)
    if(head == NULL) {
        return temp;

    head->prev = temp;
    temp->next = head;

    return temp;
}