#include "list.h"

/**
 * main - entry point
 *
 */

int main(void)
{
	node *list;
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(array) / sizeof(array[0]);
	list = create(array, n);

	for (int i = 0; i < n; i++)
	{
		printf("%d ",list->n);
		list = list->next;
	}
	printf("\n");
}
