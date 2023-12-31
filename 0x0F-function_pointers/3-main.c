#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - program that performs simple operations.
  * @argc: number of arguments
  * @argv: command-line arguments
  */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;
	char div = '/';
	char mod = '%';

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((num2 == 0 && *operator == div) || (num2 == 0 && *operator == mod))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);
}
