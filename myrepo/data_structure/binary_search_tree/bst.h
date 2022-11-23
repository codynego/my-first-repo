#ifndef BST_H
#define BST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct node - create a binary search node
 * @n: an integer
 * @left: pointer to the left node
 * @right: pointer to the right node
 *
 */

typedef struct node
{
	int n;
	struct node *left;
	struct node *right;
} node;

node *create_bst(int *array, int size);
void insert(node **root, int data);
int print_tree(node *root);
int search_bst(node *root, int value);
node *merge_tree(node *root1,  node *root2);


#endif
