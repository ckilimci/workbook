#include <stdio.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

typedef int bool;
#define true 1
#define false 0

struct node* newNode(int);
void printNode(struct node*);
bool bfs(struct node*, int);
void bf_print(struct node*);

