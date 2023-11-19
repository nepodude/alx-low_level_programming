#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define(PASSWORD_LENGTH) = (10)

/**
 * main - prints a random password
 * Return: 0 on success.
 */
int main(void)
{
	const char possibilities[] = "abcdefghijklmnopqrstuvwxyz
		ABCDEFGHIJKLMKNOPQRSTUVWXYZ0123456789";
	char password[PASSWORD_LENGTH + 1];
	unsigned int i = 0;

	srand(time(NULL));
	for (; i < PASSWORD_LENGTH; i++)
	{
		password[i] = possibities[rand() % (sizeof(possibilities) - 1)];
	}

	printf("%s", password);
	return (0);
}
