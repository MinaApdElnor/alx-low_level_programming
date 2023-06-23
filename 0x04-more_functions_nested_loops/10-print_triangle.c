#include "main.h"

/**
 * print_triangle - prints 10 times the numbers, from 0 to 14
 * @size: the number of times
 *
 * Return: void
 */

void print_triangle(int size)
{
	int k, j, n;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (k = 1 ; k <= size ; k++)
		{
			for (j = size - 1; j >= k; j--)
				putchar(' ');
			for (n = 1; n <= k; n++)
				putchar('#');
			putchar('\n');
		}


	}

}
