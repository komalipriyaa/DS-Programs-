

#include"sort.h"


int mergeSort ( int * A, int l, int r ) {

	if ( l >= r )
		return 0;
	int m = (l+r)/2;
	
	mergeSort ( A, l, m );
	mergeSort ( A, m+1, r );
	combine ( A, l, m, r );
	return 1;
}


int combine ( int * A, int l, int m, int r ) {

	int n1 = m-l+1;
	int n2 = r-m;

	int * L = ( int * )malloc ( (n1+1)* sizeof( int ) );
	int * R = ( int * )malloc ( (n2+1)* sizeof( int ) );

	for ( int i = 1; i <= n1; i++ )
		L[i] = A[l+i-1];
	for ( int i = 1; i <= n2; i++ )
		R[i] = A[m+i];

	L[n1+1] = 32767;
	R[n2+1] = 32767;

	int i = 1, j = 1;
	for ( int k = l; k <= r; k++ ) {

		if ( L[i] <= R[j]) {

			A[k] = L[i];
			i += 1;
		}
		else {

			A[k] = R[j];
			j = j + 1;
		}			
	}

	return 0;
	
}
