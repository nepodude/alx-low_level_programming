#include "main.h"
/**
 * print_times_table - Print the `n` times table, starting with 0.
 * Description: If `n` is greater than 15 or less than 0, print nothing.
 * @n: int type number
 */
void print_times_table(int n)
{
int i = 0;
int j, product;
if (n > 15 || n < 0)
return;
while (i <= n)
{
for (j = 0; j <= n; j++)
{
product = i * j;
if (product > 99)
{
_putchar(product / 100 + '0');
_putchar((product / 10 % 10) + '0');
_putchar(product % 10 + '0');
}
else if (product > 9)
{
_putchar(' ');
_putchar(product / 10 + '0');
_putchar(product % 10 + '0');
}
else if (j != 0)
{
_putchar(' ');
_putchar(' ');
_putchar(product + '0');
}
else
_putchar(product + '0');
if (j != n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
i++;
}
}
