

#include<stdio.h>
#include<stdlib.h>


struct Node {

	int data;
	struct Node * next;

};



int insertNode ( struct Node **, struct Node *, int );

int traverse ( struct Node * );

int deleteNode ( struct Node **, struct Node * );

int searchNode ( struct Node *, struct Node **, int );

void reverseLL ( struct Node **, struct Node *, struct Node *, struct Node * );
