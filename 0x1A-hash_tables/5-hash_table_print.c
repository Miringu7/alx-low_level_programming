#include "hash_tables.h"

/**
  * hash_table_print - function that prints a hash table.
  * @ht: the hash table
  * Return: void
  */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i = 0;

	if (!ht || !ht->array)
	{
		return;
	}

	printf("{");
	while (i <= ht->size)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				if (i < ((ht->size) - 1))
					printf(", ");
				temp = temp->next;
			}
		}
		i++;
	}
	printf("}\n");

}
