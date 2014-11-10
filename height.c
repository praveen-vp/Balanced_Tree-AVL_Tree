
#include "Tree.h"

int height (struct node* p) {
	if(p == NULL)
		return 0;
	else 
		return p->height; 
}

