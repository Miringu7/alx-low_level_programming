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
	int i, range, *arr_range;

	if (min > max)
		return (NULL);

	arr_range = malloc(sizeof(int) * ((max - min) + 1));

	if (arr_range == NULL)
		return (NULL);

	range = (max - min) + 1;
	i = 0;
	while (i < range)
	{
		arr_range[i] = i;
		i++;
	}
	return (arr_range);
	free(arr_range);
}
