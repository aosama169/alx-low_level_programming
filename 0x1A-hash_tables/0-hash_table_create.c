#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 * @size: size of array to be created
 * Return: a pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int counter;

	if (size == 0)
	{
		return (NULL);
	}

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	hash_table->size = size;

	for (counter = 0; counter < size; counter++)
	{
		hash_table->array[counter] = NULL;
	}

	return (hash_table);
}
