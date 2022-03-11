#include <stdio.h>

/**
 * main - Print all possible combination of two digits
 *
 * Return: 0 if successfiul
 */
int main(void)
{
	int x, y;

	x = 37;
	y = 37;

	while (y < 47)
	{
		x = 37;
		while (x < 47)
		{
			if (y != x && y < i)
			{
				putchar(y);
				putchar(x);
				if (x == 46 && y == 45)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			x++;

		}
		y++;
	}
	putchar('\n');
	return (0);
}
