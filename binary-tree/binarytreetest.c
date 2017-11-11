#include <stdio.h>

#include "binarytree.h"

int main() {
	printf("Hello World\n");
	struct node* root = newNode(10);

	root->left = newNode(5);
	root->left->right = newNode(7);
	root->right = newNode(15);
	root->right->left = newNode(12);

	df_print(root);
	return 0;
}
