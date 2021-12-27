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

Node deleteHead(Node *head) {
    if(head == NULL)
        return NULL;
        
    Node *temp = head->next;
    delete head;
    return temp;
}