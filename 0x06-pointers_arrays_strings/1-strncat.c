#include "main.h"

/**
  * _strncat - concatenates two strings
  * @dest: function parameter 1
  * @src: function parameter 2
  * @n: function parameter 3
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, destlen = 0;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[destlen + i] = *src;
		src++;
	}
	dest[destlen + i] = '\0';

	return (dest);
}
