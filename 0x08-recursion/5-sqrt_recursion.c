#include "main.h"
/**
 * -helper - recursively find int sqrt
 * @n: input to find squareroot for.
 * @i; input counter
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
}
/**
 * _sqrt_recursion - recrusing now on n
 * @n: input integer.
 * Return: returns integer squareroot
 */
int _sqrt_recursion(int n)
{
return (helper(n, 0));
}
