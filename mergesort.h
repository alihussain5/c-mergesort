// merge(arr,one,two,size1,size2) merges two sorted lists, one & 
//   two with sizes size1,size2 into a sorted list arr
// requires: size of arr is size1 + size2, one and two are sorted 
//   lists of integers
// effects: modifies the values of arr to have sorted content
//   from one and two
// effeciency: O(n) where n is (size1 + size2)
void merge(int *arr, int *one, int *two, int size1, int size2);

// mergesort(list,size) uses merge sort to sort list with size 
//    elements in accending order
// effects: modifies list to be sorted
// effeciency: O(nlogn)
//    non-recursive functions: O(n) *6 + O(1) * 2 = O(n)
//    size of the recursion: n /2 (mergesort w/ size/2)
//    T(n) = O(n) + T(n/2) + T(n/2)
//    T(n) = O(nlogn)
void mergesort(int *list, int size);