STL - Standard Template Library
## VECTORS
```c++
vector <int> v1;               // 1-D vector
vector < vector<int> > v2;     // 2-D vector
vector <vector<int>> v3;       // wrong declaration of 2-D. Compiler will get confused with '>>' operator.
```
__Array of vectors vs Vector of specific size__
```c++
vector <int> v[10];            // array of vectors : array size is 10
vector <int> v(10);            // vector of size 10
```
__ADT :__
- v.size()    : returns size of vector
- v.empty()   : true if vector is empty else false
- v.resize()  : changes size of a vector
- v.clear()   : erases all elements

If you want to preset values to a vector :
```c++
vector <int> v(10,29);         // sets all elements to 29
```

__Matrix vectors :__
```c++
int N,M;
vector < vector<int> > matrix (N,vector<int>(M,0));     //creates a matrix of size MxN with value 0
```

__Passing vectors as parameters :__
```c++
void function(vector <int> &v) 
```

## SETS
1. lower_bound() : returns the first element that is equal to or greater than key.
2. upper_bound() : returns the first element that is strictly greater than key.

## STRUCT COMPARATORS
Instead of writing 
```c++
sort(arr,arr+n)
```
we will write 
```c++
sort(arr,arr+n,comparator)
```

## ORDERED SET and GNU C++
Link : [Ordered Set GfG](https://www.geeksforgeeks.org/ordered-set-gnu-c-pbds/)
 
 Be sure to include!
 ```c++
 using namespace __gnu_pbds;
 ```
Ordered set keeps the __unique__ elements in sorted order.
- order_of_key (k) : returns number of elements strictly smaller than k
- find_by_order (k) : returns kth element in a set (starting from 0)

## UNORDERED MAPS
Link : [Unordered Map GfG](https://www.geeksforgeeks.org/unordered_map-in-cpp-stl/)

4 times faster than Maps!
It is __not__ sorted.
Search, insert and delete is O(1).

__ADT :__
- umap.insert() : takes pair as an argument.
- umap.find(key) : searches key

## LINKS
https://www.topcoder.com/community/competitive-programming/tutorials/power-up-c-with-the-standard-template-library-part-1/

https://stackoverflow.com/questions/10765586/priority-queue-of-pairs-in-reverse-order

