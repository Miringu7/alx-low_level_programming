#include <stdio.h>

/**
  * main - main function for loop iterates through
  * lowercases and avoids letters e and q
  * Return: returns 0
  */

int main(void)
{
	char lcase;

	for (lcase = 'a' ; lcase <= 'z' ; lcase++)
	{
		if (lcase == 'e' || lcase == 'q')
			lcase++;
		else
			putchar(lcase);
	}

	return (0);
}
