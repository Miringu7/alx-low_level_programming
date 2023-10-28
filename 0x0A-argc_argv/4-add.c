#include <stdio.h>

/**
  * main - program that adds positive numbers.
  * @argc: argument values
  * @argv: argument vectors
  * Return: returns 0 and (1) if there is a non-digit
  */

int main(int argc, char *argv[])
{
	int value, sum = 0, i;

	if (argc == 1)
		printf("0\n");

	else
	{
		for (i = 1; i < argc; i++)
		{
			value = 0;

			while (*argv[i])
			{
				if (*argv[i] >= '0' && *argv[i] <= '9')
				{
					value = value * 10 + (*argv[i] - '0');
				}
				else
				{
					printf("Error\n");
					return (1);
				}
				argv[i]++;
			}
			sum = sum + value;
		}
		printf("%d\n", sum);
	}
	return (0);
}
