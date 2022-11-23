#include "bst.h"

/**
 * insert - insert a node to a binary search tree
 * @root: the root of the tree
 * @data: th new node
 *
 * Return: no return
 */

void insert(node **root, int data)
{
	node *tmp;
	node *current;
	tmp = *root;

	current = malloc(sizeof(node));
	current->n = data;
	current->left =  NULL;
	current->right = NULL;

	if (data < tmp->n)
	{
		if (tmp->left != NULL)
		{
			insert(&tmp->left, data);
		}
		else
		{
			tmp->left = current;
		}
	}
	else
	{
		if (tmp->right != NULL)
		{
			insert(&tmp->right, data);
		}
		else
		{
			tmp->right = current;
		}
	}
}
