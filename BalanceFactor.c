
#include "Tree.h"
int height(struct node* p); 

int BalanceFactor(struct node* p) {

	if (p == NULL)
		return 0;
	return height(p->left)-height(p->right);
}
