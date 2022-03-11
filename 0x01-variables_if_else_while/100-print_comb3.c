#include <stdio.h>

/**
 * main - print all possible different combinations of two digits
 * Return: 0 if sccessful
 */
int main(void)
{
	int a, b;

	for (a = 38; a <= 56; a++)
	{
		for (b = 39; b <= 57; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != 56 || b != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
