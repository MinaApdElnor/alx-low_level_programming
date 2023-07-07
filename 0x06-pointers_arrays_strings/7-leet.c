#include "main.h"

/**
 * leet - function that concatenates two strings.
 * @c: first string pointer.
 *
 * Return: character pointer
 */

char *leet(char *c)
{
	char *ptr = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int num[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*c == key[i] || *c == key[i] + 32)
			{
				*c = 48 + num[i];

			}
		}
		c++;
	}
	return (ptr);
}
