#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints a random password
 * Return: 0 on success.
 */
char* main(void)
{
	const char possibilities[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMKNOPQRSTUVWXYZ0123456789";
	char password[10 + 1];
	unsigned int i = 0;

	srand(time(NULL));
	for (; i < 11; i++)
	{
		password[i] = possibilities[rand() % (sizeof(possibilities) - 1)];
	}

	printf("%s", password);
	return ("Tada! Congrats");
}
