#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - Calculates and prints remaining days in a year
 * @month: month in number format
 * @day: day of month
 * @year: year
 */
void print_remaining_days(int month, int day, int year)
{
	int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int is_leap_year = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
	int day_of_year = day;

	for (int i = 1; i < month; i++) {
		day_of_year += days_in_month[i];
		if (i == 2 && is_leap_year) {
			day_of_year++; // February 29th for leap years
		}
	}

	if (day_of_year > 365 || (day_of_year == 366 && !is_leap_year)) {
		printf("Invalid date: %02d/%02d/%04d\n", month, day - days_in_month[month], year);
	} else {
		printf("Day of the year: %d\n", day_of_year);
		printf("Remaining days: %d\n", is_leap_year ? 366 - day_of_year : 365 - day_of_year);
	}
}

