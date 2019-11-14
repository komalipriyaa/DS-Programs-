
#include"heap.h"

#define SIZE 20

int main() {

	int heapSize, A[SIZE];
	
	printf ( " enter the siZe of heap\n" );
	scanf ( "%d", &heapSize );
	
	inputHeap ( A, heapSize );
	displayHeap ( A, heapSize );
	printf ( "\n" );

	minHeapSort ( A, heapSize );
	printf ( "sorted using minheap : ");
	displayHeap ( A, heapSize );
	printf ( "\n" );

	maxHeapSort ( A, heapSize );
	printf ( "sorted using maxheap : ");
	displayHeap ( A, heapSize );
	printf ( "\n" );

	return 0;

}



int inputHeap ( int * A, int heapSize ) {

	for ( int i = 1; i <= heapSize; i++ ) {
		
		printf( "enter the key\n ");
		scanf ( "%d", &A[i] );
		
	}

	return 0;

}
