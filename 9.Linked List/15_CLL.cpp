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

void display(Node *head) {
    Node *curr = head->next;
    cout<<head->data<<" ";
    while(curr != head) {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

int main() {
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    head->next = temp1;
    Node *temp2 = new Node(30);
    temp1->next = temp2;
    temp2->next = head;
    display(head);
}