
#include "Tree.h"

int height(struct node* p);
int max(int a, int b);

struct node* LeftRotate(struct node* p) {
	
	struct node* x = p->right;
	struct node* temp = x->left;

	x->left = p;
	p->right = temp;

	p->height = max(height(p->left),height(p->right))+1;
	x->height = max(height(x->left),height(x->right))+1;

	return x;
}

