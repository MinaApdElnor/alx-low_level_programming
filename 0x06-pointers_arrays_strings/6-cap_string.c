#include "main.h"


/**
 * iSlower - determine the char is lower or not
 * @c: the passing char to the function.
 *
 * Return: return 1 if char lower
 */

int iSlower(char c)
{
	return (c >= 97 && c <= 122);
}


/**
 * isDelimiter - determine the char is delimiter or not
 * @c: passing char to the func.
 *
 * Return: return 1 if the char is delimiter and 0 if not.
 */

int isDelimiter(char c)
{
	int i;
	char d[] = {' ', '\n', '\t', '\"', ',', ';', '.', '?', '!', '(', ')', '{', '}'};

	/*delimiter[] = " \n\t\",.;!?(){}";*/

	for (i = 0; i < 13 ; i++)
		if (c == d[i])
			return (1);
	return (0);

}


/**
 * cap_string - function that capitalize the 1st char in word.
 * @c: first string pointer.
 *
 * Return: character pointer
 */

char *cap_string(char *c)
{
	char *ptr = c;
	int foundDeli = 1;

	while (*c)
	{
		if (isDelimiter(*c))
			foundDeli = 1;
		else if (iSlower(*c) && foundDeli)
		{
			*c -= 32;
			foundDeli = 0;
		}
		else
			foundDeli = 0;
		c++;
	}

	return (ptr);

}
