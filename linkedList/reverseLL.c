

#include"header.h"

void reverseLL (struct Node **head, struct Node * temp, struct Node * p1, struct Node * p2 ) {

	if ( !temp ) {
		(*head) = p1;
		return;
	}

	temp->next = p1;
	p1 = temp;
	temp = p2;

	if ( p2 )
		p2 = p2->next;

	return reverseLL ( head, temp, p1, p2 );

}
