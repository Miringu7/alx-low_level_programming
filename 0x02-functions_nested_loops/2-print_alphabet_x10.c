#include "main.h"

/**
  * print_alphabet_x10 - prints alphabet 10 times
  * Return: Always 0
  */

void print_alphabet_x10(void)
{
	int times;

	for (times = 0; times <= 10; times++)
	{
		int i;

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
