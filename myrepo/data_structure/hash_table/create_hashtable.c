#include "hashtable.h"
/**
 * create_hashtable - create an hash table
 * @size: size of the table
 *
 * Return: return a pointer to the hashtable
 */

hashtable *create_hashtable(int size)
{
	hashtable *ht;
	ht = malloc(sizeof(hashtable));
	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = malloc(sizeof(node) * size);
	if (ht->array == NULL)
	{
		return (NULL);
	}
	return (ht);
}
