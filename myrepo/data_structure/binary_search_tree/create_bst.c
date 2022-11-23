#include "bst.h"

/**
 * create_bst - create a binary search tree
 * @array: a pointer to an array of integers
 * @size: size of the array
 *
 * Return: returns the root of the tree
 */


node *create_bst(int *array, int size)
{
	node *root;
	root = malloc(sizeof(node));
	if (root == NULL)
		return NULL;
	root->n = array[0];
	root->left = NULL;
	root->right = NULL;

	for (int i = 1; i < size; i++)
	{
		node *current;
		node *tmp;
		
		tmp = root;
		current = malloc(sizeof(node));
		if (current == NULL)
			return NULL;
		current->n = array[i];
		current->left = NULL;
		current->right = NULL;

		while (tmp != NULL)
		{
			if (array[i] > tmp->n)
			{
				if (tmp->right == NULL)
				{
					tmp->right = current;
					break;
				}
				tmp = tmp->right;
			}
			else
			{
				if (tmp->left == NULL)
				{
					tmp->left = current;
					break;
				}
				tmp = tmp->left;
			}
		}
//		free(tmp);
	}
	return root;
}
