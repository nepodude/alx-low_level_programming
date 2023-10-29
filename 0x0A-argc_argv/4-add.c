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
if (argc == 1)
{
printf("0\n");
return (0);
}
int i = 1;
while (i < argc)
{
while (*argv[i] != '\0')
{
if (*argv[i] < '0' || *argv[i] > '9')
printf("Error\n");
return (1);
argv[i]++;
}
i++;
}
int sum = 0;
int counter = 1;
int num __attribute__((unused));
while (counter < argc)
{
sum += _atoi(argv[i]);
counter++;
}
printf("%d\n", sum);
return (0);
}
