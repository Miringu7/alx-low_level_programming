#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - returns a pointer to a newly allocated space in memory
  * @str: string parameter
  * Return: character
  */

char *_strdup(char *str)
{
	char *duplicate;
	int i;
	int size = 0;

	while (*str)
	{
		size = size + 1;
		str++;
	}
	duplicate = malloc(sizeof(char) * (size + 1));

	if (str == NULL || duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);

	free(duplicate);
}