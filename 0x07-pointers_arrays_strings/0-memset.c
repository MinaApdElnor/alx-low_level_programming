#include "main.h"

/**
 * _memset - memory  set
 * @s: passing pointer.
 * @b: the constant value.
 * @n: the size of blocks.
 *
 * Return: char pointer.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (ptr);
}
