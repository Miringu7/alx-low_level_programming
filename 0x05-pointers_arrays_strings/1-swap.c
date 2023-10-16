#include "main.h"

/**
  * swap_int - function that swaps the values of two integers.
  * @a: function parameter1
  * @b: function parameter2
  * Return: returns nothing
  */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
