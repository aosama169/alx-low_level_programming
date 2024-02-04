#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implement djb2 algorith
 * @str: string to hash
 *
 * Return: calculated hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int ctr;

	hash = 5381;
	while ((ctr = *str++))
		hash = ((hash << 5) + hash) + ctr;

	return (hash);
}
