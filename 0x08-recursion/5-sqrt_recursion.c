#include "main.h"

/**
 * square - ksks
 * @n: jkfj
 * @val: aksfj
 *
 * Return: int value
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}




/**
 * _sqrt_recursion - prints a string
 * @n: pointer to string
 *
 * Return: int value
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
