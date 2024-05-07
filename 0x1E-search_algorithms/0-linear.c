#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
* linear_search - Entry point
* @array: is a pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
* Return: Always EXIT_SUCCESS
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int index = 0;

	if (!array || !value)
		return (-1);
	for (i = 0; i != size; i++)
	{
		if (array[i] == value)
			return (index);
		else
		{
			printf("Value checked array[%d] = [%d]\n", index, array[i]);
			index++;
		}
	}
	return (-1);
}
