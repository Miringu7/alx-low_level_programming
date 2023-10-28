#include <stdio.h>

/**
  * main - program that multiplies two numbers.
  * @argc: argument count
  * @argv: argument vector
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int value1 = 0, value2 = 0, i1 = 0, i2 = 0, sign1 = 1, sign2 = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (*argv[1] == '-')
		{
			sign1 = -1;
			i1++;
		}

		if (*argv[2] == '-')
		{
			sign2 = -1;
			i2++;
		}

		for ( ; argv[1][i1] != '\0'; ++i1)
			value1 = value1 * 10 + (argv[1][i1] - '0');
		value1 = value1 * sign1;

		for ( ; argv[2][i2] != '\0'; ++i2)
			value2 = value2 * 10 + (argv[2][i2] - '0');
		value2 = value2 * sign2;

		printf("%d\n", (value1 * value2));
	}

	return (0);
}
