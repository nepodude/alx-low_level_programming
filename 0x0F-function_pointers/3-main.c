#include "3-calc.h"

/**
 * main - does the job of operations
 * @argc: argument count
 * @argv: argument vector.
 * Return: returns 0 on success.
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;
	int (*function)(int, int);
	char x;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	function = get_op_func(argv[2]);
	if (!function)
	{
		printf("Error\n");
		exit(99);
	}

	x = *argv[2];

	if (atoi(argv[3]) == 0 && (x == '/' || x == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	result = function(num1, num2);

	printf("%d\n", result);

	return (0);
}
