#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: first string pointer.
 * @src: second string pointer
 *
 * Return: character pointer
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		i++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = src[j];

	return (dest);
}
