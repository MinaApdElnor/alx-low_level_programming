#include "main.h"

/**
 * _strncpy - function that concatenates two strings.
 * @dest: first string pointer.
 * @src: second string pointer.
 * @n: number of elements
 *
 * Return: character pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i];

	return (dest);
}
