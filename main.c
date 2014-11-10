
#include "Tree.h"

int main()
{
	struct node* root = NULL;
	
//	15 20 24 12 13 7 30 36 25
	root = insert(root,15); 
	print(root);
	printf("\n");

	root = insert(root,20);
	print(root);
	printf("\n");
	
	root = insert(root,24);
	print(root);
	printf("\n");

	root = insert(root,10);
	print(root);
	printf("\n");

	root = insert(root,13);
	print(root);
	printf("\n");
	
	root = insert(root,7);
	print(root);
	printf("\n");
	
	root = insert(root,30);
	print(root);
	printf("\n");

	root = insert(root,36);
	print(root);
	printf("\n");

	root = insert(root,25);
	print(root);
	printf("\n");

	printpath(root);
	return 0;
}

