#include "bst.h"

/**
 * main - entry point of the program
 *
 * Return: return 0 on success
 */

int main(void)
{
	int array[] = {4,5,2,8,1};
	int arr[] = {3,13,16,11};
	int n = sizeof(array)/sizeof(array[0]);
	int n2 = sizeof(arr)/sizeof(array[0]);
	node *root;
	node *root2;

	root = create_bst(array, n);
	root2 = create_bst(arr, n2);
	printf("\n");
	print_tree(root);
	printf("\n");
	print_tree(root2);
	printf("\n");
	merge_tree(root, root2);
	print_tree(root);
	printf("\n");

//	return (0);
}
