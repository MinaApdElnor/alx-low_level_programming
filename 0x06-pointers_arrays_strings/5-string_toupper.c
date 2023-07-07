#include "main.h"

/**
 * string_toupper - function that concatenates two strings.
 * @c:  string pointer.
 *
 * Return: pointer ot type char
 */

char *string_toupper(char *c)
{
	char *ptr = c;

	while (*c)
	{
		if (*c >= 97 && *c <= 122)
			*c -= 32;
		c++;
	}

	return (ptr);
}
