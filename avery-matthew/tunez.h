#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int data; 
	struct node* next
} node;

node* make_new();
void print_list(node* n);
node* insert_front(int new, node* n);
void free_list(node* n);
