#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: first occurrence of character in string s
 *
 * Return: returns s. NULL if c is not found.
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return ('\0');
}
