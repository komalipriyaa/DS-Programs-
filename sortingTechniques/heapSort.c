

#include"heap.h"

int maxHeapSort ( int * A, int heapSize ) {

	if ( heapSize == 1 )
		return 1;
	int t;
	
	constructMaxHeap ( A, heapSize );

	t = A[heapSize];
	A[heapSize] = A[1];
	A[1] = t;

	heapSize--;
	
	maxHeapSort ( A, heapSize );

}

int minHeapSort ( int * A, int heapSize ) {

	if ( heapSize == 1 )
		return 1;
	int t;
	
	constructMinHeap ( A, heapSize );
	t = A[heapSize];
	A[heapSize] = A[1];
	A[1] = t;

	heapSize--;
	
	minHeapSort ( A, heapSize );

}
