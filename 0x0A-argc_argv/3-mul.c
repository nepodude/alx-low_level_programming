#include <stdio.h>
#include <stdio.h>
/**
 * _atoi - acts like real function atoi
 * @s: input
 * Return: integer multiple.
 */
int _atoi(char *s)
{
int result = 0;
int sn = 1;
int final = result * sn;
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
return (final);
}
/**
 * main - prints the product
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
int num1 = _atoi(argv[1]);
int num2 = _atoi(argv[2]);
int product = num1 * num2;
printf("%d\n", product);
return (0);
}
