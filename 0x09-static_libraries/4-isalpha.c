#include "main.h"

/**
 * _isalpha - Return 1 if letter is lowercase, 0 if not.
 * @c: char type letter
 * Return: 1 if lowercase, 0 if not lowercase
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}

