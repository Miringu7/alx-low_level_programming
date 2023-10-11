#include "main.h"
#include <string.h>

/**
  * main - this is a function printing "_putchar"
  * Return: Always 0
  */

int main(void)
{
	const char* message = "_putchar\n";
	int i;
	int meslen = strlen(message);

	for(i = 0; i < meslen; i++)
	{
		_putchar(message[i]);
	}
	return (0);
}
