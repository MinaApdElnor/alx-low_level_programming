#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: first string pointer.
 * @src: second string pointer
 * @n: number of elements
 *
 * Return: character pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
