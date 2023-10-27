#include <stdio.h>
/**
 * main - prints the product
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
if (argc > 0)
{
int result;
result = arg[1] * arg[2];
printf("%d\n", result);
}
else
{
printf("Error");
return (1);
}
return (0);
}
