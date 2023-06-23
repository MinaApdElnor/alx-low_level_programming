#include "main.h"

/**
 * void print_most_numbers - print 0-9 expect 2&4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
			continue;
		else
			putchar(i);

	}
		putchar('\n');
}
