#include "main.h"

/**
  * _atoi - convert a string to an integer
  * @s: function parameter
  * Return: returns 0 
  */

int _atoi(char *s)
{
	int i, sign = 0, count = 0;

	for (i = 0; s[i] != 0; i++)
		count++;
	for (i = 0; s[i] < count; i++)
	{
		if (s[i] == '-')
			sign++;
	}
	return (0);
}
