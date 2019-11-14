

#include"hash.h"

int insertHashLinear ( int * A, int key, int m ) {

	int i, j = 0;

	i = ( key + j ) % m;

	while ( A[i] != 0 ) {
		
		j++;
		i = (( key + j) % m);
	}

	if ( j == m ) {

		printf ( "no space\n" );
		return 1;
	
	} else {

		A[i] = key;
		return 0;
	}
	
}
