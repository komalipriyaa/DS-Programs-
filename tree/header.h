#include<stdio.h>
#include<stdlib.h>



struct Node {

	int data;
	struct Node * left;
	struct Node * right;
};



int insertNode ( struct Node **, struct Node * );

void preOrder ( struct Node * );

void inOrder ( struct Node * );

void postOrder ( struct Node * );

int search ( struct Node *, int );

int height ( struct Node **, int * );
