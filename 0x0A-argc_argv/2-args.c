#include <stdio.h>
#include "main.h"
/**
 * main - prints every argument
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%d\n", argv[i]);
}
return (0);
}
