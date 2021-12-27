#include<iostream>
using namespace std;

int removeDublicatesFormSortedArray(int arr[], int n) {

    int newSize = 0;

    for(int i = 1; i < n; i++) {

        if(arr[newSize] != arr[i]) {
            newSize++;
            arr[newSize] = arr[i];
        } 
    }

    return newSize;
}

int main() {
    int arr[] = {1,1,2,3,3,3,4,6,7,7};
    int n = removeDublicatesFormSortedArray(arr, 10);

    for (int i = 0; i < n; i++)
        cout << arr[i] <<" "<< endl;
}