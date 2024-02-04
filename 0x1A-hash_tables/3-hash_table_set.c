#include "hash_tables.h"

/**
  * hash_node_create - function that creates a hash node
  * @key:  is the key string
  * @value: is the value associated with the key.
  * Return: new node if it succeeded, NULL otherwise
  */

hash_node_t *hash_node_create(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);

	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;

	return (new_node);
}

/**
  * hash_table_set - function that adds an element to the hash table.
  * @ht:  hash table you want to add or update the key/value to
  * @key: is the key string
  * @value: is the value associated with the key
  *
  * Return: 1 if it succeeded, 0 otherwise
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *dup_value;
	hash_node_t *new_node, *ptr;
	unsigned long int index;
	const unsigned char *u_key = (const unsigned char *)key;

	if (!u_key || !key || !ht || !ht->array || !ht->size)
	{
		return (0);
	}

	index = key_index(u_key, ht->size);
	ptr = ht->array[index];

	if (ptr)
	{
		while (!ptr)
		{
			if (strcmp(ptr->key, key) == 0)
			{
				dup_value = strdup(value);
				if (!dup_value)
					return (0);
				free(ptr->value);
				ptr->value = dup_value;
				return (1);
			}
			ptr = ptr->next;
		}
	}

	new_node = hash_node_create(key, value);
	if (!new_node)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
