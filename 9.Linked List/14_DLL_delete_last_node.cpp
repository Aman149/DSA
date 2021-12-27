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

Node *delteTail(Node *head) {
    if(head == NULL)
        return NULL;
    
    if(head->next == NULL)
        delete head;
        return NULL;
    
    Node *curr = head;
    while(curr->next != NULL)
        curr = curr->next;

    curr->next->prev = NULL;
    delete curr;
    return head;
}