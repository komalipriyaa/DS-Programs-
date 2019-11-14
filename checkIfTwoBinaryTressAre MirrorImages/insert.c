

#include"header.h"


int preOrderInsert ( struct Node ** root, struct Node * newNode ) {

	if ( (*root) == 0 ) {
		(*root) = newNode;
		return 0;
	} else {

		return preOrderInsert ( &((*root)->left), newNode );
		return preOrderInsert ( &((*root)->right), newNode );

	}	

}
