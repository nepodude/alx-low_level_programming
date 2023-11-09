#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name using pointers
 * @name: name to print
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
