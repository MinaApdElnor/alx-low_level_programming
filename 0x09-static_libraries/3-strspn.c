#include "main.h"

/**
 * _strspn - memory  set
 * @s: passing pointer.
 * @accept: the constant value.
 *
 * Return: int value
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, found;
	unsigned int length = 0;


	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				found = 1;
				break;
			}
		}
		if (found == 1)
			length++;
		else
			break;
	}
	return (length);
}
