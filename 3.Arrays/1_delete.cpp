#include<iostream>
using namespace std;

void deleteElement(int arr[], int n, int loc) {

    if(n>loc) {
        for(int i=loc-1; i<n-1; i++)
        arr[i] = arr[i+1];
        arr[n-1]=0;
    }

}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    deleteElement(arr, 10, 5);

    for(int i=0; i<10; i++) 
        cout<<arr[i]<<" ";
}