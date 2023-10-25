#include "main.h"
int helper(int n, int i);
/**
 *_sqrt_recursion - prints final thing
 * @n: input integer.
 * Return: returns integer squareroot
 */
int _sqrt_recursion(int n)
{
return (helper(n, 0));
}
/**
 * helper - recursively find int sqrt
 * @n: input to find squareroot for.
 * @i: input counter
 * Return: integer square root.
 */
int helper(int n, int i)
{
if (i * i ==  n)
{
return (i);
}
else if (i * i > n || n < 0)
{
return (-1);
}
else if (i * i < n)
{
return (helper(n, i + 1));
}
return (-1);
}
