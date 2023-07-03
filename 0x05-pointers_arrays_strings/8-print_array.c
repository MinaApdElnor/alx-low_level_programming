#include "main.h"

/**
 * print_array - entry point
 * @a: the passed pointer
 * @n: number of elements of arrray
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i == n - 1)
			printf("%d\n", a[i]);
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
