#include <stdio.h>

/**
  * main - function main prints lowercase in reverse
  * Return: returns 0
  */

int main(void)
{
	char lcase;

	for (lcase = 'z' ; lcase >= 'a' ; lcase--)
		putchar(lcase);
	putchar('\n');
	return (0);
}
