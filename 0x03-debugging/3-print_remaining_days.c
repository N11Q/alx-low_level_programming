#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - converts a date to the day of year
 * determines how many days are left in the year
 *  takes leap year into consideration.
 *  @month: month in numbers
 *  @day: day of the month
 *  @year: year
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
	{
		if (month > 2 && day >= 60)
		{
			day++
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31
