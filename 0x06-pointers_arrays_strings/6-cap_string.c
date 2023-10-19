 #include "main.h"
/**
 * cap_string - change a strin to all upper case.
 * @s: a string pointer input
 * Return: the string s it's self
 */
char *cap_string(char *s)
{
char *beginning = s;
while (*s != '\0')
{
if (*s == ' ' || *s == '\t' || *s == '\n' || *s == ','
|| *s == ';' || *s == '.' || *s == '!' || *s == '?' || *s == '"'
|| *s == '(' || *s ==  ')' || *s == '{' || *s == '}')
{
if (*(s + 1) >= 97 && *(s + 1) <= 97 + 26)
{
*(s + 1) -= 32;
}
}
s++;
}
return (beginning);
}
