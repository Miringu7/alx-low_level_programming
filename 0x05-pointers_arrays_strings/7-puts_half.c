#include "main.h"
#include <stdio.h>

/**
  * puts_half - prints half of a string
  * @str: function parameter
  * Return: void
  */

void puts_half(char *str)
{
	int i, n, count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	printf("count: %d", count);

	if (count % 2 == 0)
	{
		n = count / 2;
		for (i = n; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
	{
		n = (count - 1) / 2;
		for ((i = n + 1); str[i] != '\0'; i++)
		_putchar(str[i]);
	}

	_putchar('\n');
}
