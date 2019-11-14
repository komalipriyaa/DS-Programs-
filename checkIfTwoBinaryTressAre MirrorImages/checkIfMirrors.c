


#include"/home/komali_priya/2-1/DS/tree/header.h"


int checkIfMirrorImages ( struct Node * root1, struct Node *root2 ) {

	if ( !root1 && !root2 )
		return 1;
	else if ( (!root1 && root2) || (root1 && !root2))
		return 0;
	else {

		if( root1->data != root2->data )
			return 0;
		else
			return ( (checkIfMirrorImages( root1->left,root2->right ) && ( checkIfMirrorImages( root1->right, root2->left ))));



	}







}
