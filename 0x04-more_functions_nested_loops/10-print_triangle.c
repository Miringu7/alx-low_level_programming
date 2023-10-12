#include "main.h"

/**
  * print_triangle - function that prints a triangle
  * @size: function parameter
  * Return: always void
  */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= size; i++)
		{
			int j;
			int sh;

			for (j = size; j > i; j--)
			{
				_putchar(' ');
			}
			for (sh = 0; sh < i; sh++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
}
