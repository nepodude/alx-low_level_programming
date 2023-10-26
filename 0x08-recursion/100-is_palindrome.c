#include "main.h"
int helper(char *s, int start, int end);
int string_len(char *s);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
return (helper(s, 0, string_length  - 1));
}
/**
 * is_palindrome_helper - nice one to help
 * @s: input string
 * @start: start flat point
 * @end: end place number
 * Return: integer sign.
 */
int helper(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (helper(s, start + 1, end - 1));
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
