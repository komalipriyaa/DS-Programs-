
#include"sort.h"


int quickSort ( int * A, int l, int r ) {

	if ( l >= r )
		return 0;

	int p;
	
	p = partition ( A, l, r );
	quickSort ( A, l, p-1 );
	quickSort ( A, p+1, r );

	return 1;

}


int partition ( int * A, int l, int r ) {

	int pivot = A[r/2];
	int i = l-1;
	int j = l;
	printf ( "k\n" );
	while ( j <= r-1 ) {
		
		if ( A[j] <= pivot ) {

			i = i + 1;
			swap ( A[i], A[j] );
		}
		j++;
	}
	swap ( A[i+1], A[r] );

	
	return (i+1);

}



int swap ( int a, int b ) {

	int t;
	
	t = a;
	a = b;
	b = t;

	return 0;
}
