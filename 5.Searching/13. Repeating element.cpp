#include<bits/stdc++.h>
using namespace std;

//Repeating Elements
//This question uses the Floyd's cycle detection algorithm 
int findRepeating(vector<int> arr) {
    int slow = arr[0], fast = arr[0];

	//this will check if a cycle is there or not, in this Question we do have a cycle
    do {
        slow = arr[slow];
        //fast is moving at double speed
        fast = arr[arr[fast]];
    } while(slow != fast);
    
    //Now we have to find the first element of our cycle
    slow = arr[0];

    while(slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}

int main() {
    vector<int> arr = {1, 3, 2, 4, 6, 5, 7, 3};
    cout<<findRepeating(arr);
}