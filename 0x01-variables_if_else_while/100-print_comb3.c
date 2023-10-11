#include <stdio.h>
/**
 * main - function that sucs
 * printing combination of digits 
 * return 0: success
*/
int main(void)
{
int x = 0;
for (; x <= 9; x++)
{
for (int y = x + 1; y <= 9; y++)
{
if (x != y)
{
putchar(x + 48);
putchar(y + 48);
putchar(',');
putchar(' ');
}
}
}
return (0);
}
