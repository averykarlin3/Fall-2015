#include "tunez.h"

node* make_new(int d) {
	node* new = (node*)malloc(sizeof(node));
	(*new).data = d;
	(*new).next = 0;
	return new;
}

void print_list(node* n) {
	while((*n).next) {
		printf("%i\n", (*n).data);
		n = (*n).next;
	}
}

node* insert_front(int new, node* n) {
	node* nnew = make_new();
	(*nnew).data = new;
	(*nnew).next = n;
	return nnew;
}

void free_list(node* n) {
	while((*n).next) {
		node* tbd = n;
		n = (*n).next;
		free(tbd);
	}
}
