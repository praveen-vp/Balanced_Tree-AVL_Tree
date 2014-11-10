
#include "Tree.h"

int height(struct node* p);
int max(int a, int b);
int BalanceFactor(struct node* p);
struct node* RightRotate(struct node* p);
struct node* LeftRotate(struct node* p);

struct node* insert(struct node* p,int data) {

	if(p == NULL) 
		return NewNode(data);

	if(data <= p->data) 
		p->left = insert(p->left,data);
	else 
		p->right = insert(p->right,data);

	p->height = max(height(p->left), height(p->right)) + 1;

	int bfactor = BalanceFactor(p);	//balance factor

	if((bfactor > 1) && (data < p->left->data)) 	// left heavy left child insertion
		return RightRotate(p);
	if((bfactor > 1) && (data > p->left->data)) {	// left heavy right child insertion 
		p->left = LeftRotate(p->left);
		return RightRotate(p);
	}	
	if(bfactor < -1 && data > p->right->data) 		// right heavy right insertion 
		return LeftRotate(p);
	if(bfactor < -1 && data < p->right->data) {		// right heavy left insertion 
		p->right = RightRotate(p->right);
		return LeftRotate(p);
	}
	return p;
}

