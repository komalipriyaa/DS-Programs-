
#include"sort.h"

int insertionSort ( int * A, int n ) {

	int key, j;	

	for ( int i = 2; i <= n; i++ ) {

		key = A[i];
		j = i-1;
		
		while ( (j >= 1) && ( A[j] > key ) ) {

			A[j+1] = A[j];
			j = j-1;
		}
		
		A[j+1] = key;
	}

	return 0;
}
