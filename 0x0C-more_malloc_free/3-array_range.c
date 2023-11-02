#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, *array_range;

	if (min > max)
		return (NULL);

	array_range = malloc(sizeof(int) * ((max - min) + 1));

	if (array_range == NULL)
		return (NULL);

	i = 0;
	while (i < ((max-min) + 1))
	{
		array_range[i] = i;
		i++;
	}
	return (array_range);
	free (array_range);
}
