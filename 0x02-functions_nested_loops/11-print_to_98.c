#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * Return: void
 */
void print_to_98(int n)
{
	int i;
	for (i = n; i != 98;)
	{
		printf("%d, ", i);

		if (n > 98)
			i--;
		else
			i++;
	}

	printf("98\n");
}
