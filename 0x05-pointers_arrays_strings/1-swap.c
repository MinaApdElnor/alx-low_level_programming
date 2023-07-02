#include "main.h"

/**
 * swap_int - entry point
 * @a: the first passed pointer
 * @b: the second passed pointer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
