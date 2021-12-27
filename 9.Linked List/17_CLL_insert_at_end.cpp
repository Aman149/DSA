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

// Node *insertBeg(Node *head, int x) {
//     Node *temp = new Node(x);
//     if(head == NULL) 
//         temp->next = temp;
//     else {
//         Node *curr = head;
//         while(curr->next != head)
//             curr = curr->next;
//         curr->next = temp;
//         temp->next = head;
//     }
//     return temp;
// }

Node *insertEnd(Node *head, int x) {
    Node *temp = new Node(x);
    if(head == NULL) {
        temp->next = temp;
        return temp;
    }
   
    // else {
    //     Node *curr = head;
    //     while(curr->next != head) 
    //         curr = curr->next;
        
    //     curr->next = temp;
    //     temp->next = head;
    // }

    else {
        temp->next = head->next;
        head->next = temp;

        int t = head->data;
        head->data = temp->data;
        temp->data = t;
        return temp;
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
    insertEnd(head, 40);
    cout<<endl;
    display(head);
}