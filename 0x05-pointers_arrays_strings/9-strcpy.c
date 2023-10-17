#include "main.h"
#include <stdio.h>

/**
  * _strcpy - copies the string pointed to by src
  * @dest: function parameter
  * @src: function parameter
  * Return: returns parameter dest
  */

char *_strcpy(char *dest, char *src)
{
	int i, strlength, count = 0;

	for (i = 0; src[i] != '\0'; i++)
		count++;

	strlength = count + 1;

	for (i = 0; i < strlength; i++)
		dest[i] = src[i];

	return (dest);
}
