#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 if Success
 */

int main(void)
{
	int i;
	long int sum;

	sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;

	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
