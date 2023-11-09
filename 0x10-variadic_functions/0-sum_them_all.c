#include "variadic_functions.h"
/**
 * sum_them_all - calculates the sum of it's inputs
 * @n: number of input arguments
 *
 * Return: the sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
va_start(args, n);
int sum = 0;
unsigned int i;
for (i = 0; i < n; ++i)
{
int value = va_arg(args, int);
sum += value;
}
va_end(args);
return (sum);
}
