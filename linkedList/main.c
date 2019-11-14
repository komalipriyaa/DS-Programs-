

#include"header.h"


int main() {

	struct Node * head = ( struct Node *)malloc( sizeof( struct Node ));
	struct Node * prev = ( struct Node *)malloc( sizeof( struct Node ));

	int data;
	prev = head;
	data = 10;

	while ( data <= 100 ) {
		
		insertNode ( &head, prev, data );
		data += 10;
	}

	
	traverse ( head );
	
	printf ( "\n" );

	reverseLL ( &head, head, NULL, head->next );

	traverse ( head );

	return 0;	
}
