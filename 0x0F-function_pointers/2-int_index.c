#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - check the code
 * @array: array as function parameter
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: Always integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < 20; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
