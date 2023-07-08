#include "main.h"

/**
 * _strspn - memory  set
 * @s: passing pointer.
 * @accept: the constant value.
 *
 * Return: int value
 */

unsigned int _strspn(char *accept, char *s)
{
	int i, j, found;


	for (i = 0; accept[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
				found = 1;
		}
		if (found == 1)
			continue;
		else
			break;
	}
	return (j+1);
}
