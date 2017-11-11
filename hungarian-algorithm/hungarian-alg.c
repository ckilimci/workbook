#include <stdio.h>
#include <stdlib.h>

#include "hungarian-alg.h"

struct node* newNode(int data) {
	printf("Creating new node\n");
	struct node* n = (struct node*)malloc(sizeof(struct node));

	n->data = data;
	n->left = NULL;
	n->right = NULL;

	return n;
}

void printNode(struct node* n) {
	if (NULL != n) printf("Node: %d\n", n->data);
	if (NULL != n->left) printf("   L: %d\n", n->left->data);
	if (NULL != n->right) printf("   R: %d\n", n->right->data);

}

struct queueNode {
	struct node* node;
	struct queueNode* next;
};

struct queueNode* queueHead;
struct queueNode* queueTail;

void appendToQueue(struct node* n) {
	if (NULL != queueTail) {
		queueTail->next = (struct queueNode*)malloc(sizeof(struct queueNode)); 
		queueTail = queueTail->next;
	} else {
		queueTail = (struct queueNode*)malloc(sizeof(struct queueNode)); 
	}
	queueTail->node = n;
	queueTail->next = NULL;
	
	if (NULL == queueHead) queueHead = queueTail;
}
struct node* getFromQueue() {
	if (NULL != queueHead) {
		struct node* n = queueHead->node;
		queueHead = queueHead->next;
		return n;
	}
	return NULL;
}

void printQueue() {
	struct queueNode* q = queueHead;
	while(NULL != q) {
		printNode(q->node);
		q = q->next;
	}
}

bool bfs(struct node* node, int s) {
	printf("BF Searching..\n");
	appendToQueue(node);
	struct node* n = getFromQueue();
	while (NULL != n) {
		printNode(n);
		if (n->data == s) {
			return true;
		} else {
			if (NULL != n->left) appendToQueue(n->left);
			if (NULL != n->right) appendToQueue(n->right);
		}  
		n = getFromQueue();
	}
	printf("Node did not found!\n");
	return false;
}

void bf_print(struct node* node) {
	appendToQueue(node);
	struct node* n = getFromQueue();
	while (n) {
		printNode(n);
		if (n->left) appendToQueue(n->left);
		if (n->right) appendToQueue(n->right);
		n = getFromQueue();
	}
	printf("Done!\n");
}

void df_print(struct node* node) {
	if (node) {
		df_print(node->left);
		printNode(node);
		df_print(node->right);
	}
}