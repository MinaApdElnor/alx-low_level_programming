#include "main.h"

/**
 * *_strcpy - entry point
 * @dest: first passed pointer
 * @src: second passed pointer
 *
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';

	return (dest);

}
