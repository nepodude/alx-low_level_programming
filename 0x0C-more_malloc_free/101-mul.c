#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * is_number - checkes of a string is composed of digits only.
 * @s: input string to check
 * Return: returns 1 when we have digits only and 0 otherwise.
 */

int is_number(char *s)
{
	int helper;

	for (helper = 0; s[helper] != '\0'; helper++)
	{
		if (!isdigit(s[helper]))
			return (0);

	}
	return (1);
}

/*
 * main - multiplies just.
 * @argc: number of arguments including the name call.
 * @argv: an array whose parameters are
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	
	if (argc != 3 || !is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
