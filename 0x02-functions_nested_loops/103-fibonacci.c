#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if success
 */

int main(void)
{
	long int f1, f2, result, sum;
	int n;

	f1 = 0;
	f2 = 1;
	result = 0;
	sum = 0;
	n = 0;

	do {

		result = f1 + f2;
		f1 = f2;
		f2 = result;
		if (result % 2 == 0)
			sum += result;
		n++;
	} while (n < 10);
	printf("%ld", sum);
	printf("\n");
	return (0);
}
