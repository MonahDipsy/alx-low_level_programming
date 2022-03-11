#include <stdio.h>

/**
<<<<<<< HEAD
 * main - Print all possible combination of three numbers
 *
 * Return: 0 if successful
 */
int main(void)
{
	int c = 0;
	int f_d;
	int m_d;
	int l_d;

	while (c <= 999)
	{
		f_d = (c / 100 + '0');
		m_d = (c / 10 % 10 +'0');
		l_d = (c % 10 + '0');

		if ((f_d < m_d) && (m_d < l_d))
		{
			putchar(f_d);
			putchar(m_d);
			putchar(l_d);

			if (c != 789)
			{
				putchar(',');
				putchar(' ');
=======
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e, g;

	i = 48;
	e = 48;
	g = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			g = 48;
			while (g < 58)
			{
				if (e != i && e != g && i != g && e < i && i < g)
				{
					putchar(e);
					putchar(i);
					putchar(g);
					if (i == 56 && e == 55 && g == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				g++;
>>>>>>> 4105c2580858ef949f563581ca5b725036706cda
			}
			i++;
		}
<<<<<<< HEAD
		c++;
=======
		e++;
>>>>>>> 4105c2580858ef949f563581ca5b725036706cda
	}
	putchat('\n');
	return (0);
}
