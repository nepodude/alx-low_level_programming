#include "3-calc.h"
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - final program to perform operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
int arg1, arg2, result;
char o;
int (*function)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
arg1 = atoi(argv[1]);
arg2 = atoi(argv[3]);
function = get_op_func(argv[2]);
if (!function)
{
printf("Error\n");
exit(99);
}
o = *argv[2];
if ((o == '/' || o == '%') && arg2 == 0)
{
printf("Error\n");
exit(100);
}
result = function(arg1, arg2);
printf("%d\n", result);
return (0);
}
