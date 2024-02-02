#include "hash_tables.h"

/**
  * hash_table_delete - function that deletes a hash table.
  * @ht: the hash table
  * Return: void
  */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;

	while (i < ht->size)
	{
		node = ht->array[i];

		if (node)
		{
			free(node->key);
			free(node->value);
			free(node);
		}
		i++;
	}

	free(ht->array);
	free(ht);
}
