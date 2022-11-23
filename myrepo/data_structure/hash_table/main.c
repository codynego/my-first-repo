#include "hashtable.h"
/**
 * main - entry point of the program
 * Return: reurn 0 on sucess
 */

int main(void)
{
	hashtable *negtable;
	int hash;
	negtable = create_hashtable(10);
	hash = keyindex("helo", negtable->size);
	printf("%d\n", negtable->size);
}
