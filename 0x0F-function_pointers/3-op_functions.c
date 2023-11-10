#include "3-calc.h"
#include <stdio.h>

/**
  * op_add - sum of a and b
  * @a: parameter 1
  * @b: parameter 2
  * Return: sum a and b
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of a and b
 *
 * @a: function parameter
 * @b: function parameter
 * Return: the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of a and b
 *
 * @a: function parameter
 * @b: function parameter
 * Return: the product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of a by b
 *
 * @a: function parameter
 * @b: function parameter
 * Return: the division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of the division of a by b
 *
 * @a: function parameter
 * @b: function parameter
 * Return: the modulus
 */

int op_mod(int a, int b)
{
	return (a % b);
}
