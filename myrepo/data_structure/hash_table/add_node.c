#include "hashtable.h"
/**
 * addnode - add a node to a hashtable
 * @key: the key of the value
 * @value: the value
 *
 * Return: no return
 */
int addnode(hashtable **ht, char *key, char *value)
{
	hashtable *tmp;
	node *tmpnode;
	int index;

	tmp = *ht;
	index = keyindex(key, tmp->size);
	tmpnode = malloc(sizeof(node));
	if (tmpnode == NULL)
	{
		return NULL;
	}
	tmpnode->key = key;
	tmpnode->value = value;
	tmpnode->next = NULL;

	if (tmp->array[

}
