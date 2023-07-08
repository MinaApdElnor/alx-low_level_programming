#include "main.h"

/**
 * _strchr - memory  set
 * @s: passing pointer.
 * @c: the constant value.
 *
 * Return: char pointer or null if not found.
 */

char *_strchr(char *s, char c)
{
	char *ptr;
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			return (ptr);
		}
	}
	return ('\0');
}
