#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: bytes of memory to get from s
 *
 * Return: returns length of initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
