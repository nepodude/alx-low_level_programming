#include <stdio.h>
/**
 * main - prints program arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[] --attribute-- ((unused)))
{
if (argc > 0)
{
printf("%d\n", argc - 1);
}
return (0);
}
