#include "main.h"

/**
  * _strcmp - function that compares two strings
  * @s1: function parameter1
  * @s2: function parameter2
  * Return: returns 0
  */

int _strcmp(char *s1, char *s2)
{
	if (*s1 - *s2 != 0)
	{
		if (*s1 < *s2)
			/* if s1 is lesser return the difference*/
			return (*s1 - *s2);
		else if (*s1 > *s2)
			/*if s1 is greater return the difference*/
			return (*s1 - *s2);
	}
	return (0);
}
