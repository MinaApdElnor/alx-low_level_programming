#include "main.h"

/**
 * _memcpy - memory  set
 * @dest: passing pointer.
 * @src: the constant value.
 * @n: the size of blocks.
 *
 * Return: char pointer.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (ptr);
}
