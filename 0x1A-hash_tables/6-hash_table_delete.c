#include "hash_tables.h"

/**
  * hash_table_delete - function that deletes a hash table.
  * @ht: the hash table
  * Return: void
  */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp;

	while (i < ht->size)
	{
		temp = ht->array[i];
		if (temp)
		{
			free(temp->key);
			free(temp->value);
			temp = ht->array[i]->next;
			free(ht->array[i]);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
