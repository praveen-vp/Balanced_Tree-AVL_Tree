
#include <stdio.h>
#include "Tree.h"

void print (struct node* p) 
{
	if (p == NULL)
		return;
	print(p->left);
	printf("-%d(%d)", p->data,p->height);
	print(p->right);
}

