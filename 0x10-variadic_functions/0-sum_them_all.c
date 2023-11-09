#include "variadic_functions.h"
/**
 * sum_them_all - calculates the sum of it's inputs
 * @n: number of input arguments
 *
 * Return: the sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
unsigned int sum = 0;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
sum += va_arg(args, int);
va_end(args);
return (sum);
}
