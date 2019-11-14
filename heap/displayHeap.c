
#include"heap.h"

int displayHeap ( int * A, int heapSize ) {

	for ( int i = 1; i <= heapSize; i++ ) {
		printf("%d ", A[i]);
	}
	return 0;
}
