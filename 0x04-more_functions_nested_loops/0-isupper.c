#include "main.h"

/**
  * _isupper - return 1 or 0
  * Description: returns value if c is uppercase
  * @c: the number computed
  * Return: returns 1 if uppercase and 0 if not
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 80)
		return (1);
	else
		return (0);
}
