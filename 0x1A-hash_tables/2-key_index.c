#include "hash_tables.h"

/**
  * key_index - function that gives you the index of a key.
  * @key:  is the key string
  * @size: is the size of the array of the hash table
  * Return: index at which the key/value pair should be stored
  * in the array of the hash table
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int my_hash_djb2 = hash_djb2(key);
	unsigned long int index;

	index = my_hash_djb2 % size;

	return (index);
}
