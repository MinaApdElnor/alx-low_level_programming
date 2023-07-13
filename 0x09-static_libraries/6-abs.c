#include "main.h"

/**
 * _abs -  prints the sign of a number.
 * @n: the enter number
 *
 * Return: int value
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else if (n > 0)
		return (n);
	else
		return (0);

}
