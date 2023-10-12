#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of the month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
{
daysInMonth[2] = 29;
}

int remainingDays = 0;
for (int i = month; i <= 12; i++)
{
remainingDays += daysInMonth[i];
}
remainingDays -= day;

printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", remainingDays);
}

