

#include"heap.h"

void constructMinHeap ( int * A, int heapSize ) {

	int i;
	for ( i = heapSize/2; i >= 1; i-- )
		minHeapify ( A, i, heapSize ); 

}

void constructMaxHeap ( int * A, int heapSize ) {

	int i;
	for ( i = heapSize/2; i >= 1; i-- )
		maxHeapify ( A, i, heapSize ); 

}



int minHeapify ( int * A, int i, int heapSize ) {

	int l = (2 * i);
	int r = (( 2 * i ) + 1);
	int smallest, t;

	if ( ( l <= heapSize ) && ( A[l] <= A[i] ) )
		smallest = l;
	else if ( ( r <= heapSize ) && ( A[r] <= A[i] ) )
		smallest = r;
	else
		smallest = i;

	if ( i != smallest ) {
		t = A[smallest];
		A[smallest] = A[i];
		A[i] = t;
		minHeapify ( A, smallest, heapSize );
		minHeapify ( A, i, heapSize );
	}
	return 0;

}


int maxHeapify ( int * A, int i, int heapSize ) {

	int l = (2 * i);
	int r = (( 2 * i ) + 1);
	int greatest, t;

	if ( ( l <= heapSize ) && ( A[l] >= A[i] ) )
		greatest = l;
	else if ( ( r <= heapSize ) && ( A[r] >= A[i] ) )
		greatest = r;
	else
		greatest = i;

	if ( i != greatest ) {
		t = A[greatest];
		A[greatest] = A[i];
		A[i] = t;
		maxHeapify ( A, greatest, heapSize );
		maxHeapify ( A, i, heapSize );
	}
	return 0;

}
