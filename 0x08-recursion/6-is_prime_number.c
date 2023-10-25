#include "main.h"
int helper(int n, int i);
/**
 * is_prime_number - prime detector
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
if (n > 0)
return (helper(n, 2));
else
return (0);
}
/**
 *  helper - looks  prime recursively
 * @n: number input
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int helper(int n, int i)
{
if (n == 2)
return (1);
if (n % i != 0)
{
if (i <= n / 2)
{
helper(n, i + 1);
}
return (1);
}
return (0);
}
