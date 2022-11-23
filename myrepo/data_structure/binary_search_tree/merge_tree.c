#include "bst.h"

/**
 * merge_tree - merge 2 tree into 1
 * @root1: Root of the first tree
 * @root2: root of the second tree
 *
 * Return: root of the newly merge tree
 */

node *merge_tree(node *root1,  node *root2)
{
	node *tmp;
	node *tmp2;

	tmp2 = root2;
	tmp = root1;

	if (tmp2->n > tmp->n)
	{
		if (tmp->right != NULL)
		{
			merge_tree(tmp->right, tmp2);
		}
		else
		{
			tmp->right = tmp2;
		}
	}
	else
	{
		if (tmp->left != NULL)
		{
			merge_tree(tmp->left, tmp2);
		}
		else
		{
			tmp->left = tmp2;
		}
	}

	return (root1);
}

