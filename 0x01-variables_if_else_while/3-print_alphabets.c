#include <stdio.h>

/**
  * main - for loop is the main function
  * Return: returns 0
  */

int main(void)
{
	char lcase;
	char ucase;

	for (lcase = 'a' ; lcase <= 'z' ; lcase++)
	{
		putchar(lcase);
	}
	for (ucase = 'A' ; ucase <= 'Z' ; ucase++)
	{
		putchar(ucase);
	}
	putchar('\n');

	return (0);
}
