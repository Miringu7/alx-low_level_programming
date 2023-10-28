#include <stdio.h>

/**
  * main - program that multiplies two numbers.
  * @argc: argument count
  * @argv: argument vector
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int value1, value2;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		value1 = (*argv[1] - '0');
		value2 = (*argv[2] - '0');

		printf("%d\n", (value1 * value2));
	}

	return (0);
}
