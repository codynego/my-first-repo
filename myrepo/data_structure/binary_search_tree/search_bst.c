#include "bst.h"

/**
 * search_bst - search a value in a binary search tree
 *
 * @root: the root of the tree
 * @value: the value to search
 * Return: return 1 when found and -1 when not found
 */

int search_bst(node *root, int value)
{
	node *tmp;
	tmp = root;

	if (tmp != NULL)
	{
		if (value == tmp->n)
			return (1);
		if (value < tmp->n)
		{
			search_bst(tmp->left, value);
		}
		else if (value > tmp->n)
		{
			search_bst(tmp->right, value);
		}
	}
	else
	{
		return (-1);
	}
}
