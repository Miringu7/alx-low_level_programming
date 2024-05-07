#include "search_algos.h"
/**
* linear_search - Entry point
* @array: is a pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
* Return: index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	int left = 0, i, mid;
	int right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
