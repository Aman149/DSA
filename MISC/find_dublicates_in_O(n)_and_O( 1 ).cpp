#include <bits/stdc++.h>
using namespace std;
 
 /**
  * 0  1 -> arr[1%4] = 1th position = arr[1%4] + 4 => arr[1] = 1 + 4
  * 1  1 -> arr[5%4] = 1st position = arr[5%4] + 4 => arr[1] = 5 + 4
  * 2  2 -> arr[2%4] = 2nd position = arr[2%4] + 4 => arr[2] = 2 + 4
  * 3  3 -> arr[3%4] = 3rd position = arr[3%4] + 4 => arr[3] = 3 + 4
 */



int main()
{
    int numRay[] = { 1, 1, 2, 3 };
    int arr_size = sizeof(numRay) / sizeof(numRay[0]);
/**
 * * Here we will use hasing to find dub
 * ! given that the array has elements ranging from 0 to n-1 
 * arr[6] = [ 1, 2, 2, 1, 3, 4]
*/

for(int i=0; i<arr_size; i++) 
    arr[ arr[i] % arr_size ] = arr[ arr[i] % arr_size ] + arr_size;

cout<< "Repeating  elements "<<endl;

/**
 * as we are using array size to increase the size of ith position occurrence if the element 
 * appeared more than once then the size will be grater than arr
 * i.e. the element apperared more than once
*/

for(int i=0; i<arr_size; i++)
    if(arr[i] >= arr_size * 2)
        cout<<i<<" ";

}