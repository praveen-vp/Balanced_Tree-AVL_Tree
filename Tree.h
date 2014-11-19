
// Tree.h
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>

struct node {
	int data;
	int height;
	struct node* left;
	struct node* right;
};

// functions
void print (struct node* p);
void printpath (struct node* p);

int height (struct node* p);
int max(int a, int b);
int BalanceFactor(struct node* p);

int TreeBalance(struct node* p);

struct node* NewNode (int data);
struct node* insert (struct node* p,int data);
struct node* RightRotate(struct node* p);
struct node* LeftRotate(struct node* p);


