


#include"header.h"


int search ( struct Node * root, int data ) {

	if ( !root ) {
		
		printf ( "not found \n" );
		return 1;
	}
	if ( data < (root)->data )
		search ( ((root)->left), data );
	
	else if ( data > (root)->data )
		search ( ((root)->right), data );
	else {
		printf ( "found\n" );
		return 0;
	}


}
