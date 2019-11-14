

#include"heap.h"

#define SIZE 20

int  main () {

	int heapSize, A[SIZE];
	

	printf ( " enter the siZe of heap\n" );
	scanf ( "%d", &heapSize );
	
	inputHeap ( A, heapSize );
	displayHeap ( A, heapSize );
	printf ( "\n" );

	constructMinHeap ( A, heapSize );
	printf ( "MinHeap : ");
	displayHeap ( A, heapSize );
	printf ( "\n" );
	
	constructMaxHeap ( A, heapSize );
	printf ( "MaxHeap : ");
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
