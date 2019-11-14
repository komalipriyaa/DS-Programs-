

#include<stdio.h>
#include<stdlib.h>


struct Node {

	int data;
	struct Node * left;
	struct Node * right;

};



int preOrderInsert ( struct Node **, struct Node * );

int preOrder ( struct Node * );

int inOrder ( struct Node * );

int postOrder ( struct Node * );

int checkIfMirrorImages ( struct Node *, struct Node * );
