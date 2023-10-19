#include "main.h"

/**
  * _strcat - function that concatenate two strings
  * @dest: function parameter1
  * @src: function parameter2
  * Return: returns dest
  */

char *_strcat(char *dest, char *src)
{
	int i, destlen = 0;

	for (i = 0; dest[i] != '\0'; i++)
		destlen++;
	for (i = 0; src[i] != '\0'; i++)
		dest[destlen + i] = src[i];
	dest[destlen + i] = '\0';

	return (dest);
}
