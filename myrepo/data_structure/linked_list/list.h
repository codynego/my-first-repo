#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int n;
	struct node *next;

} node;
node *create(int *array, int size);

#endif
