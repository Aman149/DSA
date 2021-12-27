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

Node *deleteHead(Node *head) {
    if(head->next == NULL) {
        delete head;
        return NULL;
    }
    
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
    return head;
}