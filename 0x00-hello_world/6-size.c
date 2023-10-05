#include <stdio.h>

/**
  * main - main sizeof function
  * Return: 0
  */

int main(void)
{
	char u;
	int v;
	long int w;
	long long int x;
	float y;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
