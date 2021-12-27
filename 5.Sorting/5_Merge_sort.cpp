// Merge sort in C++

#include <iostream>
using namespace std;

// Merge two subarrays L and M into arr
void merge(int arr[], int p, int q, int r) {
    int n1 = q-p+1; // sub array 1 size 
    int n2 = r-q;  // sub array 2 size 
    
    //2 arrays to store both halves
    int L[n1], M[n2];

    //Store data of arr in L and M array
    for(int i=0; i<n1; i++)
        L[i] = arr[p+i];
    for(int j=0; j<n2; j++)
        M[j] = arr[q+1+j];

    // to sort the data we will use while loop and 3 iterators
    int i, j ,k;
    i=j=0;
    k=p;

    while(i<n1 && j<n2) {
        if(L[i] <= M[j])
            arr[k] = L[i++];
        else 
            arr[k] = M[j++];
        k++;
    }

    //when we run out of elements of either L or R the while loop stops
    //But it might happen that the L and R arrays are not same so we run
    // 2 while loops to enter the remaining elements
    while(i<n1) 
        arr[k++] = L[i++];
    while(j<n2)
        arr[k++] = M[j++];
}

//This is the main merge sort function where we use divide and conqure
void mergeSort(int arr[], int l, int r) {
    if(l<r) {
        //m is the point where array is divided into 2 parts
        int m = l+(r-l)/2;

        mergeSort(arr,l,m);
        mergeSort(arr,m+1, r);

        //to merge the sorted subarrays
        merge(arr,l,m,r);
    }
    return;
}

// Print the array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

// Driver program
int main() {
    int arr[] = {6, 5, 12, 10, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, size - 1);

    cout << "Sorted array: \n";
    printArray(arr, size);
    return 0;
}