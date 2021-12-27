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

int searchLinkedList(Node *head, int x) {
    Node *curr = head;
    int i=1;

    while(curr != null) {
        if(curr->data == x)
            return i;
        else{
            curr = curr->next;
            i++;
        }
    }
    return -1;
}