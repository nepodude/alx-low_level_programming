#include <stdio.h>

/**
 * main - Entry point
 * Description: using sizeof to print the size of various types.
 * Return: Always 0 (Succesful)
*/
int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float e;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of an double: %lu byte(s)\n", (unsigned long)sizeof(double));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", 
(unsigned long)sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
