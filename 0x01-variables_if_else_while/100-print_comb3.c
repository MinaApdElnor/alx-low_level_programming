
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n, j;

	for (n = 48; n < 57; n++)
	{
		for (j = n + 1; j <= 57; j++)
		{
			putchar(n);
			putchar(j);
			if (n == 56 && j == 57)
				continue;
			putchar(',');
			putchar(' ');
			
		}
	}
			putchar('\n');
	return (0);

}
