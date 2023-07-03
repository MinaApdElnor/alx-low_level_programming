#include "main.h"

/**
 * puts2 - entry point
 * @str: the passed string pointer
 *
 * Return: void
 */

void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;

	for (j = 0; j <= i; j += 2)
		_putchar(str[j]);
	_putchar('\n');

}
