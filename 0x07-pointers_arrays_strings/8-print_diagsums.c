#include "main.h"

/**
 * print_diagsums - function that prints the chessboard.
 * @a: pointer to Rows.
 * @size: size of array.
 *
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		s2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
