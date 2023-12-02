#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - takes a string and then returns the corresponding function
 * @s: input string representing an operation hahaha
 * Return: a pointer to the right function that will perform the intendend
 * operation
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
	}
	return (NULL);
}
