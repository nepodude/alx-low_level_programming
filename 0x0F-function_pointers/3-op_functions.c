#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds integers
 * @a: first integer
 * @b: second integer
 * Return: the result after operation
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts integers
 * @a: first integer
 * @b: second integer
 * Return: the result after operation
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies integers
 * @a: first integer
 * @b: second integer
 * Return: the result after operation
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides integers
 * @a: first integer
 * @b: second integer
 * Return: the result after operation
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the modulo integers
 * @a: first integer
 * @b: second integer
 * Return: the result after operation
 */

int op_mod(int a, int b)
{
	return (a % b);
}
