

#include"hash.h"


int main () {

	input ();

	return 0;

}



int input () {

	int key, m, n;

	printf ( "enter the size : \n" );
	scanf ( "%d", &m );
	int * A = ( int * )malloc ( m* sizeof ( int ) );

	printf ( "enter the no. of elements to be inserted\n" );
	scanf ( "%d", &n );

	for ( int i = 1; i <= n; i++ ) {

		printf ( "enter key\n" );
		scanf ( "%d", &key );
	
		insertHashLinear ( A, key, m );
	}

	for ( int i = 1; i <= m; i++ )
		printf ( "%d ", A[i] );

	printf ( "enter the key to be searched\n" );
	scanf ( "%d", &key );

	searchHashLinear ( A, m, key );

	return 0;



}
