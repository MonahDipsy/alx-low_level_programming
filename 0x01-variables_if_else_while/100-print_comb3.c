#include <stdio.h>

/**
 * main - Print all possible combination of two digits
 *
 * Return: 0 if successfiul
 */
int main(void)
{
	int i, e;

	i = 32;
	e = 32;

	while (e < 42)
	{
		i = 32;
		while (i < 42)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 31 && e == 30)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;

		}
		e++;
	}
	putchar('\n');
	return (0);
}
