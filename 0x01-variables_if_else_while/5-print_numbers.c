#include <stdio.h>

/**
 * main - Print single digits of base 10
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return(0);
}
