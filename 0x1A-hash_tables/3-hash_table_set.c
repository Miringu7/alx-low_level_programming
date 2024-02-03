#include "hash_tables.h"

/**
  * hash_node_create - function that creates a hash node
  * @key:  is the key string
  * @value: is the value associated with the key.
  * Return: new node if it succeeded, NULL otherwise
  */

hash_node_t *hash_node_create(const char *key, const char *value)
{
	hash_node_t *new_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	char *dup_value = strdup(value);

	if (!new_node)
	{
		free(dup_value);
		return (NULL);
	}
	new_node->key = (char *) malloc(strlen(key) + 1);
	if (!new_node->key)
	{
		free(dup_value);
		free(new_node);
		return (NULL);
	}

	new_node->value = (char *) malloc(strlen(dup_value) + 1);

	if (!new_node->value)
	{
		free(dup_value);
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	strcpy(new_node->key, key);
	strcpy(new_node->value, dup_value);
	new_node->next = NULL;

	free(dup_value);
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
	hash_node_t *new_node;
	unsigned long int index;
	const unsigned char *u_key = (const unsigned char *)key;

	if (!u_key)
	{
		free(ht->array);
		free(ht);
		return (0);
	}

	new_node = hash_node_create(key, value);
	if (new_node == NULL)
	{
		free(ht->array);
		free(ht);
		return (0);
	}

	index = key_index(u_key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
