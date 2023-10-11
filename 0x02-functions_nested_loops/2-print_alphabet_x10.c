#include "main.h"

/**
 * print_alphabet_10 - this is an outstanding function
 * The character to print
 * Return: On success be happy.
 */
void print_alphabet_x10(void)
{
char chara;
int i = 0;
while (i <= 9)
{
for (chara = 'a'; chara <= 'z'; chara++)
{
_putchar(chara);
}
_putchar('\n')
i++;
}
_putchar('\n');
}
