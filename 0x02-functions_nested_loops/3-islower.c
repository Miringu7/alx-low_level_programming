#include "main.h"

/**
  * int _islower - is a function that returns 1 or 0
  * Return: Always 1 or 0
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
