#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int count = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(args, const char *);

		if (str == NULL)
			count++;
		if (count >= 1)
			printf("%s\n", "(nil)");
		else
		{
			if (separator == NULL)
				printf("%s", str);
			else
			{
				if (i == 0)
					printf("%s", str);
				else
					printf("%s%s", separator, str);
			}
		}
	}
	printf("\n");

	va_end(args);
}
