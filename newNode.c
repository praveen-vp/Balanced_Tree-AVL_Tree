
// makes a new node in the tree......
// and pushes the data in the new node;
#include "Tree.h"

struct node* NewNode(int data) {

	struct node* p = (struct node*)malloc(sizeof(struct node));
	p->data = data;
	p->left = NULL;
	p->right = NULL;
	p->height = 1;
	return p;
}

