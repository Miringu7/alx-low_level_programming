#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * str_concat - function that concatenates two strings.
  * @s1: string 1
  * @s2: string 2
  * Return: character pointer
  */

char *str_concat(char *s1, char *s2)
{
	char *combine;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	combine = malloc(sizeof(char) * (i + j + 1));

	if (combine == NULL)
		return (NULL);
	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		combine[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		combine[i] = s2[j];
		i++, j++;
	}
	combine[i] = '\0';
	return (combine);

	free(combine);
}
