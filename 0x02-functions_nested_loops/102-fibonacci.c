#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if success
 */

int main(void)
{
	int f1, f2, result, n;

	f1 = 0;
	f2 = 1;
	result = 0;
	n = 0;

	do {
		result = f1 + f2;
		f1 = f2;
		f2 = result;
		printf("%d, ", result);
		n++;
	} while (n < 50);
	printf("\n");
	return (0);
}
