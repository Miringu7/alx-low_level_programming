#include "hash_tables.h"

/**
  * hash_table_print - function that prints a hash table.
  * @ht: the hash table
  * Return: void
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;

	if (!ht)
		return;

	printf("{");
	while (i <= ht->size)
	{
		if (ht->array[i])
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			if (i < ((ht->size) - 1))
				printf(", ");
		}
		i++;
	}
	printf("}\n");
}
