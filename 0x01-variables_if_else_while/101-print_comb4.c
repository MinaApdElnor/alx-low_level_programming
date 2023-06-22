#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n, j, k;

	for (n = 48; n < 56; n++)
	{
		for (j = n + 1; j < 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{

			putchar(n);
			putchar(j);
			putchar(k);
			if (n == 55 && j == 56 && k == 57)
				continue;
			putchar(',');
			putchar(' ');
			}
		}
	}
			putchar('\n');
	return (0);

}
