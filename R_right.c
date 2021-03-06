
#include "Tree.h"

int height(struct node* p);
int max(int a, int b);

struct node* RightRotate(struct node* p) {

	struct node* x = p->left;
	struct node* temp = x->right;

	x->right = p;
	p->left = temp;
	
	p->height = max(height(p->left), height(p->right)) + 1;
	x->height = max(height(x->left), height(x->right)) + 1;

	return x;
}

