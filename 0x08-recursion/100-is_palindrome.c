#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
int n = string_length(s);
return (is_palindrome_helper(s, 0, n - 1));
}
/**
 * is_palindrome_helper - nice one to help
 * @s: input string
 * @start: start flat point
 * @end: end place number
 * Return: integer sign.
 */
int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * string_length - gives integer length
 * @s: input thing
 * Return: integer length
 */
int string_length(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + string_length(s + 1));
}
