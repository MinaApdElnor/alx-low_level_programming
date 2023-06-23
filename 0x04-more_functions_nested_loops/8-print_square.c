#include "main.h"

/**
 * print_square - prints 10 times the numbers, from 0 to 14
 * @size: the number of times
 *
 * Return: void
 */

void print_square(int size)
{
	int k, j;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (k = 0 ; k < size ; k++)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');

			}
		putchar('\n');
		}


	}

}
