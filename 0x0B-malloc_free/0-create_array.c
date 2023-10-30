#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - function that creates an array of chars
  * @size: size of memory to allocate
  * @c: initialized character
  * Return: pointer to an array
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *c_array;

	if (size == 0)
		return (NULL);

	while (1)
	{
		c_array = malloc(sizeof(c) * size);
		for (i = 0; i < size; i++)
			c_array[i] = c;	
		return (c_array);
	}

	return (NULL);

	free(c_array);
}
