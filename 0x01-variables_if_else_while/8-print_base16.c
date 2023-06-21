#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char n;

	for (n = 48; n < 58; n++)
		putchar(n);

	for (n = 65; n < 71; n++)
		putchar(n);

	putchar('\n');
	return (0);

}
