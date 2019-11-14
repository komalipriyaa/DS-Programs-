

#include"/home/komali_priya/2-1/DS/tree/header.h"


int main () {

	struct Node * root1 = ( struct Node * ) malloc ( sizeof( struct Node ));
	struct Node * root2 = ( struct Node * ) malloc ( sizeof( struct Node ));
	int data ;

	printf( "enter data ");
	scanf( "%d", &data);
	
	while ( data != 0 ) {
		
		
		struct Node * newNode = ( struct Node * ) malloc ( sizeof( struct Node ));
		
		newNode->data = data;
		preOrderInsert ( &root1, newNode );
		printf( "enter data ");
		scanf( "%d", &data);	

	}

	preOrder ( root1 );
	printf ( "\n" );
	inOrder ( root1 );
	printf ( "\n" );
	postOrder ( root1 );
	printf ( "\n" );

	printf( "enter data ");
	scanf( "%d", &data);
	
	while ( data != 0 ) {
		
		
		struct Node * newNode = ( struct Node * ) malloc ( sizeof( struct Node ));
		
		newNode->data = data;
		preOrderInsert ( &root2, newNode );
		printf( "enter data ");
		scanf( "%d", &data);	

	}

	preOrder ( root2 );
	printf ( "\n" );
	inOrder ( root2 );
	printf ( "\n" );
	postOrder ( root2 );
	printf ( "\n" );

	if ( checkIfMirrorImages ( root1,root2 ) )
		printf ( "yes" );
	else
		printf ( "no" );

	return 0;

}












