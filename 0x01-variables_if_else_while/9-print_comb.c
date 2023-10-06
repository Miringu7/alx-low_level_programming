#include <stdio.h>

/**
  * main - prints all single digit numbers
  * Return: returns 0
  */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
}
	return (0);
}
