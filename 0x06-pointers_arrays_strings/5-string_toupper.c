 #include "main.h"
/**
 * string_toupper - change a strin to all upper case.
 * @s: a string pointer input
 * Return: the string s it's self
 */
char *string_toupper(char *s)
{
char *beginning = s;
while (*s != '\0')
{
if (*s >= 97 && *s <= 97 + 25)
{
*s -= 32;
}
s++;
}
return (beginning);
}
