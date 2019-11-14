

#include"header.h"



int insertNode ( struct Node ** root, struct Node * newNode ) {

	if ( !(*root) ) {
		
		*root = newNode;
		return 0;
	}
	if ( (*root)->data > newNode->data )
		return insertNode ( &((*root)->left), newNode );
	
	else if ( (*root)->data < newNode->data )
		return insertNode ( &((*root)->right), newNode );

	else{
		printf ( "duplicates not allowed " );
		return 1;
	}


}
