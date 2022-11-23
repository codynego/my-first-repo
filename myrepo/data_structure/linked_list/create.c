#include "list.h"

/**
 * create - create a linked list from array
 *
 * @array: the array to create from
 * @size: size of the array
 *
 */

node *create(int *array, int size)
{
	node *head = NULL;

	for (int i = 0; i < size; i++)
	{
		node *tmp;
		tmp = malloc(sizeof(node));
		if (tmp == NULL)
		{
			return NULL;
		}
		tmp->n = array[i];
		tmp->next = NULL;

		tmp->next = head;
		head = tmp;
	}
	return head;
}
