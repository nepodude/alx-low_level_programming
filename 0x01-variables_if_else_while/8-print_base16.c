#include <stdio.h>
/**
 * main - Entry point
 * Description: print numbers of base16 in lowercase
 * Return: Always 0 (Success)
*/

int main(void)
{
char hex_digits[] = "0123456789abcdef\n";
int i;

for (i = 0; i < 17; i++)
{
putchar(hex_digits[i]);
}

return (0);
}
