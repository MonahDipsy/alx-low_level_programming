#include "main.h"

/**
 * main - Entry point
 * Print alphabet in lowercase followeed by new line
 * Return: Always 0 (Successful)
 */
void print_alphabet(void)
{
	char c = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(c + i);
	}
	_putchar(10);
}
