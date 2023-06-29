#include "main.h"
/**
 * print_times_table -  prints the time table.
 * @n: the number
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, prod, result;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{	_putchar(48);
			for (j = 1; j <= n; j++)
			{	_putchar(',');
				_putchar(' ');
				prod = i * j;
				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(prod + '0');
				if (prod > 9 && prod < 100)
				{	_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
				if (prod >= 100)
				{	_putchar((prod / 100) + '0');
					result = prod % 100;
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
