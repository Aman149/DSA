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

Node *reverse(Node *head) {
    
    if(head == NULL || head->next == NULL )
        return head;
    else {
        Node *curr = head;
        Node *temp = NULL;
        while(curr != NULL) {
            temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;
            curr = curr->prev;
        }
        return temp->prev;
    }
    
}
