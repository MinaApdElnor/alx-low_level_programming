#include "main.h"

/**
 * print_line - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */

void print_line(int n)
{
	int k;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (k = 0 ; k < n ; k++)
			_putchar('_');
		_putchar('\n');

	}

}
