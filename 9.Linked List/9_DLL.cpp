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

int main() {
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    temp1->prev = head;
    head->next = temp1;

    Node *temp2 = new Node(30);
    temp2->prev = temp1;

    temp1->next = temp2;
}