#include <stdio.h>

/**
 * main - Print all possible combination of two digits
 *
 * Return: 0 if successfiul
 */
int main(void)
{
	int i, e;

	i = 21;
	e = 21;

	while (e < 76)
	{
		i = 21;
		while (i < 76)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 75 && e == 74)
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
