#include <string.h>
#include "hash_tables.h"


/**
 * hash_table_get - Retrieve value associated with key in a hash table
 * @ht: A pointer to hash table
 * @key: key to get value of
 *
 * Return: If key cannot be matched
 *         Otherwise - value associated with key in ht
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_idx((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	node = ht->array[idx];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
