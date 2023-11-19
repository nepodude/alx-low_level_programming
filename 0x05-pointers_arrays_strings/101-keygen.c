#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints a random password
 * Return: 0 on success.
 */
int main(void)
{
	const char possibilities[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMKNOPQRSTUVWXYZ0123456789";
	char password[11];
	unsigned int i = 0;

	srand(time(NULL));
	for (; i < 11; i++)
	{
		password[i] = possibilities[rand() % (sizeof(possibilities) - 1)];
	}
	password[10] = '\0';
	printf("%s", password);
	return (0);
}
