#include "main.h"

/**
 * print_diagonal - prints 10 times the numbers, from 0 to 14
 * @n: the number of times
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int k, j;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (k = 0 ; k < n ; k++)
		{
			for (j = 0; j <= k; j++)
			{

				if (j == k)
					putchar('\\');
				else
					putchar(' ');

			}
		putchar('\n');
		}


	}

}
