#include "hash_tables.h"

/**
  * hash_table_create - function that creates a hash table.
  * @size: size of the array
  * Return: a pointer to the newly created hash table
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *my_table = (hash_table_t *) malloc(sizeof(hash_table_t));
	
	if (!my_table)
	{
		return (0);
	}

	my_table->size = size;
	my_table->array = (hash_node_t **) calloc(my_table->size,
			sizeof(hash_node_t *));
	if (!my_table->array)
	{
		free(my_table);
		return (0);
	}

	for (i = 0; i < my_table->size; i++)
		my_table->array[i] = NULL;

	return (my_table);
}
