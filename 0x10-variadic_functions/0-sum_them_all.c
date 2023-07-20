#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum
 * @n: the nim
 *
 * Return: int value
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int count;
	int sum = 0;

	va_list values;

	if (n == 0)
	{
		return (0);
	}
	va_start(values, n);
	for (count = 0; count < n; count++)
	{
		sum = sum + va_arg(values, int);
	}
	va_end(values);
	return (sum);
}
