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

	for (n = 97; n < 103; n++)
		putchar(n);

	putchar('\n');
	return (0);

}
