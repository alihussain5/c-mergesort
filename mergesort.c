#include "mergesort.h"


//See interface for function descriptions
void merge(int *arr, int *one, int *two, int size1, int size2) {
	int i = 0, j = 0, u = 0;
  
  while ((size1 + size2) != (i + j)) {
    if (size1 == i) {
      arr[u++] = two[j++];
    } else if (size2 == j) {
      arr[u++] = one[i++];
    } else if (one[i] <= two[j]) {
      arr[u++] = one[i++];
    } else if (one[i] > two[j]) {
      arr[u++] = two[j++];
    }
  }
}


void mergesort(int *list, int size) {
  int mid = size/2;

  if (mid != 0) {
    int *left = malloc(sizeof(int)*mid); //O(n/2) = O(n)
    int *right = malloc(sizeof(int)*(size-mid)); // O(n/2) = O(n))

    for (int i = 0; i < mid;++i) {
      left[i] = list[i];  
    } // O(n/2) = O(n)


    for (int i = 0,j = mid; j < size; ++i, ++j) {
      right[i] = list[j];  
    } // O(n/2) = O(n)
  
  
    mergesort(left,mid); 
    mergesort(right,size-mid); 
    merge(list,left,right,mid, size-mid); // O(n)
  
    free(left); //O(1)
    free(right); //O(1)
  }
}
