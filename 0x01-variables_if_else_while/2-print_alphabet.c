#include <stdio.h>

/**
  * main - main function of for loop
  * Return: returns 0
  */

int main(void)
{
	char lc;

	for (lc = 'a' ; lc <= 'z' ; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
