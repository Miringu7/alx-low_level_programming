#include "main.h"

/**
  * more_numbers - function prints 10x the numbers 0-14
  * Return: always void
  */

void more_numbers(void)
{
	int times = 0;

	while (times < 10)
	{
		int i;

		for (i = 0; i < 15; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
