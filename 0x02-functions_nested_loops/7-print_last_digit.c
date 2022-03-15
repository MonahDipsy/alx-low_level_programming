#include "main.h"

/**
 * print_last_digit - Print last digit of a number
 * @n: The number to check
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
		last = -last;

	_putchar('0' + last);
	return (last);
}
