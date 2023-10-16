#include "main.h"

/**
  * _strlen - returns the length of a string.
  * @s: function parameter
  * Return: returns sizeof a string
  */

int _strlen(char *s)
{
	int count = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
