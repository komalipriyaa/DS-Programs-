


#include"header.h"


int main () {

	struct Node * root = ( struct Node * ) malloc ( sizeof( struct Node ));
	int data ;

	printf( "enter data ");
	scanf( "%d", &data);
	
	while ( data != 0 ) {
		
		
		struct Node * newNode = ( struct Node * ) malloc ( sizeof( struct Node ));
		
		newNode->data = data;
		insertNode( &root, newNode );
		printf( "enter data ");
		scanf( "%d", &data);	

	}

	preOrder ( root );
	printf ( "\n" );
	inOrder ( root );
	printf ( "\n" );
	postOrder ( root );
	printf ( "\n" );
	
	
	int h = 0;

	height ( &root, &h );
	
	printf ( "height=%d\n", h );
	
	return 0;
}
