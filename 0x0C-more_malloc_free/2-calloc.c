#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: the number of elements
 * @size: the size of the memory
 *
 * Return: returns a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *zero_mem;

	if (nmemb == 0 && size == 0)
		return (NULL);

	zero_mem = malloc(size * nmemb);
	if (zero_mem == NULL)
		return (NULL);

	zero_mem = memset (zero_mem, 0, (nmemb * size));
	return (zero_mem);
	free(zero_mem);
}
