#include "hash_tables.h"
/**
 * hash_table_delete - Delete hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int mxt;

	if (!ht)
		return;

	for (mxt = 0; mxt < ht->size; mxt++)
	{
		node = ht->array[mxt];
		while (node)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}

	free(ht->array);
	free(ht);
}
