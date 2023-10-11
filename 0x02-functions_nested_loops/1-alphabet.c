#include "main.h"

/**
 * print_alphabet - writes the character c to stdout
 * The character to print
 * Return: On success 1.
 */
void print_alphabet(void)
{
int chara;
for (chara = 'a'; chara <= 'z'; chara++)
{
_putchar(chara);
}
_putchar('\n');
}
