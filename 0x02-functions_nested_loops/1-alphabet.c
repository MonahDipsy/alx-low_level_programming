#include "main.h"

/**
 * print_alphabet - prints the english alphabet from a-z
 *
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
