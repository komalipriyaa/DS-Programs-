

#include"header.h"


int insertNode ( struct Node ** head, struct Node * prev, int data ) {

	struct Node * newNode = ( struct Node * )malloc(sizeof( struct Node ));

	if ( !newNode ) {
		printf ( "a\n" ); 
		return 1;
	}	

	newNode->data = data;

	if ( (*head)->data == 0 ) {
		
		newNode->next = (*head)->next;
		*head = newNode;
		prev = *head;

	} else {
		newNode->next = *(head);
		*(head) = newNode;

	}

	return 0;

}
