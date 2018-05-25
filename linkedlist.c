#include "stdio.h"
#include "stdlib.h"
#include "string.h"

struct node {
	int data;
	struct node* next;
};

typedef struct node Node;

Node* root = NULL;


void insert(int data) {
	printf("Inserting %d\n", data);

	if (root == NULL) {
		root = (Node*) malloc(sizeof(Node*));
		root->data = data;
		root->next = NULL;
		return;
	}

	Node* cur = root;
	while(cur->next != NULL) {
		cur = cur->next;
	}
	cur->next = (Node*) malloc(sizeof(Node*));
	cur->next->data = data;
	cur->next->next = NULL;

}


void printAll(Node* root) {
	if (root == NULL) {
		return;
	}

	Node* cur = root;
	while(cur != NULL) {
		printf("Node = %d\n", cur->data);
		cur = cur->next;
	}
}

int main() {

	insert(1);
	insert(2);
	insert(3);

	printf("Printing linkedlist\n");

	printAll(root);


	return 0;
}

