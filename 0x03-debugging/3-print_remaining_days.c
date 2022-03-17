#include <stdio.h>
#include "main.h"

/**
<<<<<<< HEAD
 * prints_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
#include <stdio.h>
#include "main.h"
=======
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/
>>>>>>> d4b7c5691070a653765a54240d4eba1a84db0f7a

void print_remaining_days(int month, int day, int year)
{
	if (year % 4 == 0 || ((year % 400 == 0) && !(year % 100 == 0)))
	{
<<<<<<< HEAD
		if (month >= 3 && day >= 60);
=======
		if (month >= 3 && day >= 60)
>>>>>>> d4b7c5691070a653765a54240d4eba1a84db0f7a
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
<<<<<<< HEAD
			printf("Invalid date: %02d/%02d/%04\n", month, day - 31, year);
=======
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
>>>>>>> d4b7c5691070a653765a54240d4eba1a84db0f7a
		}
		else
		{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
		}
	}
}
		
