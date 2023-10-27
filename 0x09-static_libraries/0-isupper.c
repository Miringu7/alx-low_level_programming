#include "main.h"

/**
  * _isupper - checks for uppercase characters
  * Description: returns value if c is uppercase
  * @c: the number computed
  * Return: returns 1 if uppercase and 0 if not
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
