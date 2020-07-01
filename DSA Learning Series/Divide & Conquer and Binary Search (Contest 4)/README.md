# BINARY SEARCH and DIVIDE & CONQUER
Contest Link : https://www.codechef.com/LRNDSA04?order=desc&sortBy=successful_submissions

## BINARY SEARCH
Binary search maintains a contiguous subsequence of the starting sequence where the target value is surely located. This is called the search space. The search space is initially the entire sequence. At each step, the algorithm compares the median value in the search space to the target value. Based on the comparison and because the sequence is sorted, it can then eliminate half of the search space. By doing this repeatedly, it will eventually be left with a search space consisting of a single element, the target value.

__Binary Search Algorithm__
```c++
int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) 
            return mid;  
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
        return binarySearch(arr, mid + 1, r, x); 
    } 
    return -1; 
} 
```

__Binary Search Methods :__
- binary_search (start_ptr, end_ptr, num) : returns true if element is present
- lower_bound (start_ptr, end_ptr, num) : returns pointer to first position of num if present else returns next greater number than num
- upper_bound (start_ptr, end_ptr, num) : returns pointer to last position of num if present else returns next higher number than num

Check out : https://oldaddr.wordpress.com/2014/06/28/binary-search-the-answer/

__Meta Binary Search__
There is something called this. Have no idea what it is. But here is the code :'
```c++

#include <iostream> 
#include <cmath> 
#include <vector> 
using namespace std; 

int bsearch(vector<int> A, int key_to_search) 
{ 
	int n = (int)A.size(); 
	int lg = log2(n-1)+1; 

	int pos = 0; 
	for (int i = lg ; i >= 0; i--) { 
		if (A[pos] == key_to_search) 
			return pos; 
		int new_pos = pos | (1 << i); 
		if ((new_pos < n) && (A[new_pos] <= key_to_search)) 
			pos = new_pos; 
	} 
	return ((A[pos] == key_to_search) ? pos : -1); 
} 
int main(void) 
{ 

	vector<int> A = { -2, 10, 100, 250, 32315 }; 
	cout << bsearch(A, 10) << endl; 

	return 0; 
} 

```

## DIVIDE and CONQUER
Divide : Break the problem into subproblems of same type
Conquer : Recursively solve sub problems
Combine : Combine sub-solutions to give final solution

__Some standard algorithms :__
- Merge Sort
- Quick Sort
- Count Inversions
- Closest pair of points
- Strassen's matrix
- Maximum sub-array
- Longest common prefix

### MERGE SORT

__Algorithm__
- Divide the unsorted list into N sublists, each containing 1 element.
- Take adjacent pairs of two singleton lists and merge them to form a list of 2 elements. N will now convert into N/2 lists of size 2.
- Repeat the process till a single sorted list of obtained.

```c++
void merge(int A[ ] , int start, int mid, int end) {
 //stores the starting position of both parts in temporary variables.
int p = start ,q = mid+1;

int Arr[end-start+1] , k=0;

for(int i = start ;i <= end ;i++) {
    if(p > mid)    
       Arr[ k++ ] = A[ q++] ;

   else if ( q > end)   
       Arr[ k++ ] = A[ p++ ];

   else if( A[ p ] < A[ q ])     
      Arr[ k++ ] = A[ p++ ];

   else
      Arr[ k++ ] = A[ q++];
 }
  for (int p=0 ; p< k ;p ++) {
     A[ start++ ] = Arr[ p ] ;                          
  }
}

void merge_sort (int A[ ] , int start , int end )
   {
           if( start < end ) {
           int mid = (start + end ) / 2 ;           
           merge_sort (A, start , mid ) ;              
           merge_sort (A,mid+1 , end ) ;      

          merge(A,start , mid , end );   
   }                    
}
```

### TERNARY SEARCH

Consider an array of the following type :
- the array strictly increases upto a point and then strictly decreases
- the array strictly decreases upto a point and then strictly increases

We shall consider an array of the first type.

Objective : Find the maximum of this array

Approach : Let *l* be the starting index and *r* be the ending index. Consider two arbitary points m1 and m2. Compare the values of m1 and m2.

	Case 1 : m1<m2 
		 The maximum must be located somewhere after m1 since m1 must be located in the increasing region.
		 Therefore, the new range becomes [m1,r].
	Case 2 : m1>m2
		 m2 must be located in the decreasing region. So, the maximum must be located somewhere before m2.
		 Therefore, the new range becomes [l,m2].
	Case 3 : m1=m2
		 Either m1 and m2 are the same element or they lie on either side of the maximum.
		 Therefore, the new range becomes [m1,m2].
		 
m1 and m2 are chosen in the following way :

	m1 = l  +  (r - l) / 3
	m2 = r  -  (r - l) / 3

__TIME COMPLEXITY :__ O(logn)


