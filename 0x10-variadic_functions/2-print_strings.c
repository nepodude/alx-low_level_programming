#include "variadic_functions.h"
/**
 * print_strings - prints strings separated by separator
 * @separator: separator between strings
 * @n: number of arguments
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *string;
va_list arg;
va_start(arg, n);
for (i = 0; i < n; i++)
{
string = va_arg(arg, char *);
if (!string)
string = "(nil)";
if (!separator)
printf("%s", string);
else if (separator && i == 0)
printf("%s", string);
else
printf("%s%s", separator, string);
}
printf("\n");
va_end(arg);
}
