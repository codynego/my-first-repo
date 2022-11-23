#include "bst.h"

/**
 * print_tree - print the binary tree
 * @root: the root of the tree
 *
 * Return: return 0 on sucess
 */

int print_tree(node *root)
{
	node *tmp;
	tmp = root;

	if (tmp != NULL)
	{
		printf("%d ", tmp->n);
		if (tmp->left != NULL)
		{
			print_tree(tmp->left);
		}
		if (tmp->right != NULL)
		{
			print_tree(tmp->right);
		}
	}
	//printf(\n);
}
