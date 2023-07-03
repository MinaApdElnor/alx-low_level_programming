#include "main.h"

/**
 * puts_half - entry point
 * @str: the passed string pointer
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	

	for (j = i / 2; j <= i; j++)
		_putchar(str[j]);
	_putchar('\n');


}
