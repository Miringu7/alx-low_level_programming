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

	printf("Size of a char: %lu\n", (unsigned long)sizeof(char));
	printf("Size of a int: %lu\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu\n", (unsigned long)sizeof(int));
	printf("Size of a long long int: %lu\n", (unsigned long)sizeof(int));
	printf("Size of a float: %lu\n", (unsigned long)sizeof(float));
	return (0);
}
