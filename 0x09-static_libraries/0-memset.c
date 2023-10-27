#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: function parameter buffer
 * @b: constant byte to print
 * @n: bytes of memory
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
