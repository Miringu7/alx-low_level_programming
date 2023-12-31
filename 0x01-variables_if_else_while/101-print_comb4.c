#include <stdio.h>

/**
  * main - prints all different combinations of 3 digits
  * Return: always 0
  */

int main(void)
{
	int digit1;
	int digit2;
	int digit3;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for ((digit2 = digit1 + 1); digit2 < 9; digit2++)
		{
			for ((digit3 = digit2 + 1); digit3 <= 9; digit3++)
			{
				putchar(digit1 + '0');
				putchar(digit2 + '0');
				putchar(digit3 + '0');

				if (!(digit1 == 7 && digit2 == 8 && digit3 == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
