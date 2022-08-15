# Hashing
#DSA/Hashing
- - - -
#Hashing/Introduction

##### Hashing 
Is a method of storing and retrieving data in efficient manner, it is one of the most used data structure in computer science. 
1. Mainly used to implement dictionary
2. It can also be used to implement sets
3. Hashing takes O(1) in Insertion, Deletion, Searching.

#Hashing/Applications
1. Implementing dictionary
2. Database Indexing
3. Cryptography
4. Caches
5. Symbol table in Compilers/Interpreters
6. Routers
7. Getting Data from Databases.

#Hashing/Direct_address_table
Imagine a situation where we have 1000 keys with values from ( 0 to 999 ) how can we implement the following in O(1) time
	i) Search
	ii) Insert
	iii) Delete

```
#include<bits/stdc++.h>
using namespace std;
int arr[1000] = {0};

void insert(int x) {
    arr[x]++;
}

int search(int x) {
    if(arr[x] > 0)
        return x;
    else
        return -1;
}

int main() {
    insert(119);
    cout<<search(119);
}
```

- - - -

##### How does a hash function works?
	 * Should always map a large key to small key.
	 * Should generate values from 0 to m-1.
	 * Should be fast, O(1) for integers and O(len) for string of length ‘len’. 
	 * Should uniformly distribute the large keys into hash table slots. 

##### Collision Handeling
If we know the keys in advance then we can have **Perfect Hashing** , which garuntees no collisions.
Otherwise we have to use any one of the following 
	1. Chaining
	2. Addressing
		 * Linear Probing
		 * Quadratic Probing
		 * Double Hashing

###### 1. Chaining
The idea is simple, point each cell of the hash table to a linked list that will contain all the records. But it requires additional space outside the table. 

Hash(key) = key % 7
Keys = [ 50, 21, 58, 17, 15, 49, 56, 22, 23, 25 ]

| Indexed  | Hash Table |
| —————— | —————— |
| 0 |  21 | -> 49 -> 56
| 1 | 50  | -> 15 -> 22
| 2 |  58 | -> 23
| 3 |  17 |
| 4 | 25  |
| 5 |   |
| 6 |   |

