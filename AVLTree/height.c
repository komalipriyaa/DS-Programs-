

#include"header.h"

int height ( struct Node ** root, int * h ) {

	if ( !(*root) )
		return 0;		
	
	if ( (!( (*root)->left )) && !( (*root)->right ) )
		return 1;
	
	else if ( ((*root)->left ) && ( (*root)->right )) {

		int * hL = ( int * )malloc ( sizeof( int ) );
		int * hR = ( int * )malloc ( sizeof( int ) );
		*hL = 1;
		*hR = 1;
		height( &((*root)->left), hL );
		height ( &((*root)->right), hR );

		if ( (*hL) > (*hR) )
			(*h) = (*h) + (*hL);
		else
			(*h) = (*h) + (*hR); 
	}

	else {
		if ( ((*root)->left) && ( !( ((*root)->right) ) ) ) {
			(*h)++;
			return height ( &((*root)->left), h );
		}

		else if ( (!( (*root)->left )) && ( (*root)->right ) ) {
			(*h)++;
			return height ( &((*root)->right), h );
		}
	}	
		
}
