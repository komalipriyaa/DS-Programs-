
/*      NAME : KOMALI PRIYA
	ROLL NO. : 411740
	FILE NAME : header.h
	DESCRIPTION : operations on AVLTREE
	NOTE : 	THE FUNC. height(), CALLED IN THE FUNCTION lTaller() OF THIS FILE IS AVAILABLE IN "home/2-1/DS/treeLL"
*/

#include<stdio.h>
#include<stdlib.h>


struct Node {

	int data;
	struct Node * left;
	struct Node * right;

};

int AVLInsert ( struct Node **, struct Node * );

int balanceFactor ( struct Node * );

void rightBalance ( struct Node * );

int height ( struct Node **, int * );

void leftBalance ( struct Node * );

void rotateLeft ( struct Node ** );

void rotateRight ( struct Node ** );

void display ( struct Node *, int );

void inOrder ( struct Node * );
