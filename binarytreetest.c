#include <stdio.h>

#include "binarytree.h"

int main() {
	printf("Hello World\n");
	struct node* root = newNode(10);

	root->left = newNode(5);
	root->right = newNode(15);

	bfs(root, 5);
	return 0;
}
