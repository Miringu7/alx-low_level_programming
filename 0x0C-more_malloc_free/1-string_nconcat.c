#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes of s2
 *
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *combine;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);

	combine = malloc(sizeof(char) * (strlen(s1) + n + 1));

	if (combine == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		combine[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		combine[i] = s2[j];
		i++;
		j++;
	}
	combine[i] = '\0';

	return (combine);
}
