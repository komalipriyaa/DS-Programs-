


#include"header.h"



void preOrder (struct Node * root ) {

	if ( root ) {

		printf ( "%d ", root->data );
		preOrder ( root->left );
		preOrder ( root->right );
	}
	

}
