#include "main.h"

/**
 * _strstr - memory  set
 * @haystack: passing pointer.
 * @needle: the constant value.
 *
 * Return: charpointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, found;
	char *ptr;

	for (i = 0; needle[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				found = 1;
				ptr = &haystack[j];
				break;
			}
		}
		if (found == 1)
			break;
		else
			continue;
	}
	if (found == 1)
		return (ptr);
}
