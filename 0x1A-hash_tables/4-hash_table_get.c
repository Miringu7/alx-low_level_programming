#include "hash_tables.h"

/**
  * hash_table_get - function that retrieves a value associated with a key
  * @ht: hash table you want to look into
  * @key: key you are looking for
  * Return: value associated with the element, or NULL if key not found
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	const unsigned char *u_key = (const unsigned char *)key;
	unsigned long int index;
	hash_node_t *my_node, *temp;

	if (ht == NULL)
		return (NULL);

	index = key_index(u_key, ht->size);
	my_node = ht->array[index];

	if (my_node == NULL || !key)
	{
		return (NULL);
	}
	if (strcmp(my_node->key, key) == 0)
	{
		return (my_node->value);
	}
	if (my_node->next)
	{
		temp = my_node->next;
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
