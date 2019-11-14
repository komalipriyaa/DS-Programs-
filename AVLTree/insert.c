
/*      NAME : KOMALI PRIYA
	ROLL NO. : 411740
	FILE NAME : insert.c
	DESCRIPTION : RO INSERT IN AN AVLTREE
	NO. OF FUNCTIONS : 6
	NAMES OF FUNC'S : AVLinsert, balanceFactor, leftBalance, rotateLeft, rotateright, rightBalance
	NOTE : 	THE FUNC. height(), CALLED IN THE FUNCTION lTaller() OF THIS FILE IS AVAILABLE IN "home/2-1/DS/treeLL"
*/

#include"header.h"


int AVLInsert (struct Node ** root, struct Node * newNode ) {

	if ( ( !(*root) )  ) {

		(*root) = newNode;
		return 0;

	} 	

	if ( ((*root)->data == 0) ) {

		(*root) = newNode;
		return 0;

	} 

	if ( newNode->data < (*root)->data ) {

		AVLInsert( &((*root)->left), newNode );

		if ( (balanceFactor(*root) > 1) )
			leftBalance ( (*root) );
	} else if ( newNode->data > (*root)->data ) {

		AVLInsert( &((*root)->right), newNode );

		if ( (balanceFactor(*root) < -1 ) )
			rightBalance ( (*root) );
	} else {

		printf ( "duplications are not allowed " );
		return 1;
	}

}



int balanceFactor ( struct Node * root ) {

	int h = 0;
	int balanceFactor = height( &(root->left), &h ) - height( &(root->right), &h );
	return balanceFactor;

}





void leftBalance ( struct Node * root ) {

	if ( !(root)  )
		return;
	if ( balanceFactor ( (root)->left ) > 1 )
		rotateRight ( &(root) );
	else 
		rotateLeft ( &(root->left) );
		rotateRight ( &(root) );

}



void rotateRight ( struct Node ** root ) {

	if ( !( *root ) )
		return;

	struct Node * temp = ( struct Node * )malloc ( sizeof( struct Node ) );
	
	temp = (*root)->left;
	(*root)->left = temp->right;
	temp->right = (*root);
	(*root) = temp;

}


void rotateLeft ( struct Node ** root ) {

	if ( !( *root ) )
		return;

	struct Node * temp = ( struct Node * )malloc ( sizeof( struct Node ) );
	
	temp = (*root)->right;
	(*root)->right = temp->left;
	temp->left = (*root);
	(*root) = temp;

}


void rightBalance ( struct Node * root ) {

	if ( !(root) )
		return;
	if ( balanceFactor( (root)->right ) < -1 )
		rotateLeft ( &(root) );
	else 
		rotateRight ( &(root->right) );
		rotateLeft ( &(root) );

}




















