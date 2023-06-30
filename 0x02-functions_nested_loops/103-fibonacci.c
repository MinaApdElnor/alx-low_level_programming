#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if success
 */

int main(void)
{
	long int f1, f2, result;
	float sum;


	f1 = 0;
	f2 = 1;
	result = 0;
	sum = 0;

	while (1)
	{
		if (result > 4000000)
			break;
		result = f1 + f2;
		f1 = f2;
		f2 = result;
		if ((result % 2) == 0)
			sum += result;
	}

	printf("%.0f\n", sum);
	return (0);
}
