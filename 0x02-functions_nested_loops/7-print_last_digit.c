#include "main.h"

/**
 * print_last_digit -  prints the sign of a number.
 * @n: the enter number
 *
 * Return: int value
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = -1 * (n % 10);
	else
		last = n % 10;
	return (last);
}
