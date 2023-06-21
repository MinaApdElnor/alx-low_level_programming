#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n, L;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = n % 10;
	if (L > 5)
		printf("is %d and is greater than 5\n", L);
	else if (L == 0)
		printf("is %d and is 0\n", L);
	else if (L != 0 && L < 6)
		printf("is %d and is less than 6 and not 0\n", L);
	return (0);
}
