#include "main.h"
/**
 * factorial - returns the factorial of a non negative integer
 * @n: number to find factorial for
 * Return: factorial of n
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n > 0)
{
return (n * factorial(n - 1));
}
return (-1);
}
