#Searching in C++
#DSA/Searching

1. Types of Searching techniques
	1. Linear Search
	2. Binary Search
---
#Searching/Linear_Search
2. Linear Search 
	Linear search takes O(n) time to find an element of given array of size n.
	But we have a better algorithm that takes even lesser time to search an element
---
#Searching/Binary_Search
3. Binary Search 
	The only condition that we have in Binary Search is, the elements needs to be sorted in a given array to apply binary search, This is an iterative binary search. Iterative is considered over recursive solutions because iterative solutions eliminate function call overhead .

int binarySearch(vector<int> arr, int n, int target) {
    int start = 0, end = n-1, mid;
    while(start <= end) {
        mid = (start+end)/2;
        if(arr[mid] == target)
            return mid;
        else if(arr[mid] > target)
            end = mid-1;
        else
            start = mid+1;
    }
    return -1;
}




