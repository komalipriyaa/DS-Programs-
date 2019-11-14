

#include"header.h"


int main() {

	struct Node * root = ( struct Node * )malloc ( sizeof( struct Node ) );

	int data;
	printf ( "enter data \n");
	scanf ( "%d", &data );
	
	while ( data != 0 ) {
		
		struct Node * newNode = ( struct Node * )malloc ( sizeof( struct Node ) );
		newNode->data = data;
		AVLInsert ( &root, newNode );		
		
		printf ( "enter data \n");
		scanf ( "%d", &data );

	}

	inOrder ( root );

	printf ( "\n" );
	display ( root, 0 );

	return 0;
}




void display ( struct Node * root, int space ) {

	if ( !root )
		return;

	space += 1;

	display ( root->right, space );

	printf ( "\n" );
	
	for ( int i = 1; i < space; i++ )
		printf ( "\t" );

	printf ( "%d\n", root->data );

	display ( root->left, space );
	
}



void inOrder ( struct Node * root ) {

	if ( !root )
		return;

	inOrder ( root->left );
	printf ( "%d ", root->data );
	inOrder ( root->right );

} 
