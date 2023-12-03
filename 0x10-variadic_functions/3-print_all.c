#include "variadic_functions.h"

/**
 * print_all - mimics a little bit the printf function hahah
 * @format: a string that specifies my inputs.
 */
void print_all(const char * const format, ...)
{
	va_list argument;
	int i, helper;
	float f;
	char *s, c;

	va_start(argument, format);
	helper = 0;
	while (format[helper])
	{
		switch (format[helper])
		{
			case 'c':
				c = va_arg(argument, int);
				printf("%c, ", c);
				break;
			case 'i':
				i = va_arg(argument, int);
				printf("%d, ", i);
				break;
			case 'f':
				f = (float) va_arg(argument, double);
				printf("%f, ", f);
				break;
			case 's':
				s = va_arg(argument, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s, ", s);
				break;
		}
		helper++;

	}
	va_end(argument);
	printf("\n");
}
