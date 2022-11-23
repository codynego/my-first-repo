#include "hashtable.h"
/**
 * keyindex - Get the index of key based on its size
 * @size: size of the hashtable
 *
 * Return: The index of the key
 */

int keyindex(unsigned char *key, int size)
{
	unsigned long int hash;
	int index;

	hash = hash_djb2(key);
	index = hash % size;
	
	return (index);
}
