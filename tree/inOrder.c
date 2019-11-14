


#include"header.h"


void inOrder ( struct Node * root ) {

	if ( root ) {
	
		inOrder ( root->left );
		printf ( "%d ", root->data );
		inOrder ( root->right );
	}

}
