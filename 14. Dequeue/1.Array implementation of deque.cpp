#include<bits/stdc++.h>
using namespace std;

struct deque {
    int size, cap;
    int *arr;
    deque (int x) {
        cap = x;
        size = 0;
        arr = new int[cap];
    }

    bool isFull () {
        return (size == cap);
    }

    bool isEmpty () {
        return size == 0;
    }

    void insertRear (int n) {
        if (isFull ())
            return;
        arr[size] = n;
        cout << "Element " << arr[size] << " is Inserted at Rear" << endl;
        size++;
    }

    void deleteRear () {
        if (isEmpty ())
            return;
        cout << "Element " << arr[size] << " is Deleted from Rear" << endl;
        size--;
    }

    int getRear () {
        if (isFull ())
            return -1;
        else
            return arr[size];
  }

    void insertFront (int n) {
        if (isFull ())
            return;
        for (int i = size - 1; i >= 0; i--)
            arr[i + 1] = arr[i];
        arr[0] = n;
        size++;
        cout << "Element " << arr[0] << " is Inserted at Front" << endl;
    }
    
    void deleteFront () {
        if (isEmpty ())
            return;
        cout << "Element " << arr[0] << " is Deleted from Front" << endl;
        for (int i = 1; i < size; i++)
            arr[i - 1] = arr[i];
        size--;
    }

    int getFront () {
        if (isEmpty ())
            return -1;
        else
            return arr[0];
    }
}dq (10);

int main() {
    dq.insertFront (10);
    dq.insertRear (20);
    dq.insertFront (4);
    dq.deleteFront ();
    dq.deleteRear ();
    dq.insertFront (34);
    dq.getFront ();
    dq.getRear ();
}
