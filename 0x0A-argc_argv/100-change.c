#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number of coins
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int remainder1, remainder2, remainder3, remainder4, answer;
remainder1 = atoi(argv[1]) % 25;
remainder2 = remainder1 % 10;
remainder3 = remainder2 % 5;
remainder4 = remainder3 % 2;
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (argv[1] < 0)
{
printf("0\n");
return (0);
}
answer = remainder1 / 25 + remainder2  / 10 + remainder3 / 5 + remainder4;
printf("%d\n", answer);
return (0);
}
