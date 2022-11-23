#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct node - struct of each node of the hash table
 * @key: The key to the value
 * @value: The value
 * @Next; A pointer to the next node
 */

typedef struct node
{
	char *key;
	char *value;
	struct node *next;
} node;

/**
 * struct hashtable - An array of node struct
 * @size: size of the array
 */

typedef struct hashtable
{
	node **array;
	int size;
} hashtable;
unsigned long int hash_djb2(const unsigned char *str);
hashtable *create_hashtable(int size);
int keyindex(unsigned char *key, int size);

#endif
