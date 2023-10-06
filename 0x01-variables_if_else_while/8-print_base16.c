#include <stdio.h>

/**
  * main - function prints hexadecimal numbers in lowercase
  * Return: return 0
  */

int main(void)
{
	int num;
	char hex;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (hex = 'a'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');
	return (0);
}
