

#include"header.h"


int traverse ( struct Node * head ) {

	struct Node * temp = ( struct Node * )malloc(sizeof( struct Node ));
	temp = head;
	
	while ( temp ) {

		printf( "%d ", temp->data );
		temp = temp->next;

	}
	
	return 0;
}
