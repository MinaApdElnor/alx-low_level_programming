#include "main.h"

/**
 * _strlen - entry point
 * @s: the passed string pointer
 *
 * Return: int value
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);

}
