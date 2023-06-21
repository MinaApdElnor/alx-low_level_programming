#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
	return (0);

}
