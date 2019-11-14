

#include"hash.h"


int searchHashLinear ( int * A, int m, int key ) {

	int i, j = 0;

	i = ( key + i ) % m;

	while ( (A[i] != key) && ( j <= m ) ) {

		i = ( key + i ) % m;
		j++;
	}

	if ( A[i] == key ) {
		
		printf ( "found at %dth position\n", i );
		return 0;
	}
	else if ( j > m ) {

		printf ( " not found\n" );
		return 1;
	}

}
