#include "main.h"

/**
 * _puts - entry point
 * @str: the passed string pointer
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
