#include "hash_tables.h"

/**
  * free_item - function to free item in array
  * @node: item to be freed
  * Return: void
  */

void free_item(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	node->next = NULL;
	free(node);
}

/**
  * free_table - function that frees the entire table
  * @table: the table to be freed
  * Return: void
  */

void free_table(hash_table_t *table)
{
	unsigned long int i = 0;
	hash_node_t *node, *temp;

	while (i < table->size)
	{
		node = table->array[i];

		if (node)
		{
			temp = node->next;
			free_item(node);
			while (temp)
			{
				node = temp;
				temp = node->next;
				free_item(node);
			}
		}
		i++;
	}

	free(table->array);
}

/**
  * hash_table_delete - function that deletes a hash table.
  * @ht: the hash table
  * Return: void
  */

void hash_table_delete(hash_table_t *ht)
{
	free_table(ht);
	free(ht);
	ht = NULL;
}
