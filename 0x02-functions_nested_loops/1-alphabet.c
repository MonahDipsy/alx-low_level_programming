#include <stdio.h>

/**
 * main - Print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{

		_putchar(ch);
		ch++;
	}
	
	_putchar('\n');
}
