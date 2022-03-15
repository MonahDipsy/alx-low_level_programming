#include "main.h"

/**
 * main - Entry point
 * Print _putchar folllowed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (s[i] != '\n')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar(10);

	return (0);
}
