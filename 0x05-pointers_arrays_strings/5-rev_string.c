#include "main.h"

/**
 * rev_string - entry point
 * @s: the passed string pointer
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, k;
	char str[20];

	i = 0;
	while (s[i] != '\0')
		i++;
	i--;

	j = 0;
	while (i >= 0)
	{
		str[j] = s[i];
		j++;
		i--;
	}

	k = 0;
	while (j != 0)
	{
		s[k] = str[k];	
		k++;
		j--;
	}
}
