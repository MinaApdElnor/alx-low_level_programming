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
		/*printf("%d,", (i * 3));*/
		/*printf("%d,", (i * 5));*/
		sum += (i * 3) + (i * 5);
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
