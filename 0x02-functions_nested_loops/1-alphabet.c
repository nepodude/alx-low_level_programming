#include "main.h"

/**
 * main - writes the character c to stdout
 * The character to print
 * Return: On success 1.
 */
void print_alphabet(void);
{
for (int chara = 97; chara <= 97 + 25; chara++)
{
_putchar(chara);
}
_putchar('\n');
return (0);
}