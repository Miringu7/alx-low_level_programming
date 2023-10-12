#include "main.h"

/**
  * print_most_numbers - prints 0-9 without 2 & 4
  * Return: returns void
  */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; )
	{
		if (i == 2 || i == 4)
			i++;
		else
		{
			_putchar (i + '0');
			i++;
		}
	}
	_putchar ('\n');
}
