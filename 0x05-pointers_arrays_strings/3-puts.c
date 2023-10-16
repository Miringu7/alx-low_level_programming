#include "main.h"
#include <unistd.h>

/**
  * _puts - prints a string, followed by a new line
  * @str: function parameter
  * Return: returns nothing
  */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');

}
