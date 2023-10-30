#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers.
  * @width: function parameter
  * @height: function parameter
  * Return: character pointer
  */

int **alloc_grid(int width, int height)
{
	int **Two_D;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	Two_D = malloc(sizeof(int *) * height);

	if (Two_D == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		Two_D[i] = malloc(sizeof(int) * width);
		if (Two_D[i] == NULL)
		{
			for (; i >= 0; i--)
				free(Two_D[i]);
			free(Two_D);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			Two_D[i][j] = 0;
	}

	return (Two_D);

}
