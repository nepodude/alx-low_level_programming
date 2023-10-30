#include <stdio.h>
#include "main.h"
/**
 * _atoi - acts like real function atoi
 * @s: input
 * Return: integer multiple.
 */
int _atoi(char *s)
{
int result = 0;
int sn = 1;
if (*s == '-')
{
sn = -1;
s++;
}
while (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s - '0');
s++;
}
return (result *sn);
}
/**
 * main - adds two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int i = 1;
int sum = 0;
int counter = 1;
if (argc == 1)
{
printf("0\n");
return (0);
}
while (i < argc)
{
char *arg = argv[i];
while (*arg != '\0')
{
if (*arg < '0' || *arg > '9')
{
printf("Error\n");
return (1);
}
else
{
arg++;
}
}
i++;
}
while (counter < argc)
{
sum += _atoi(argv[counter]);
counter++;
}
printf("%d\n", sum);
return (0);
}
