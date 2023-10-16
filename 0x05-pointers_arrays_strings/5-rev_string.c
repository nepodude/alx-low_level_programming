#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The input string.
 */

void rev_string(char *s)
{
int start = 0;
int length = 0;
char temp;
while (s[length] != '\0')
{
length++;
}
length--;
while (start < length)
{
temp = s[start];
s[start] = s[length];
s[length] = temp;
start++;
length--;
}
}
