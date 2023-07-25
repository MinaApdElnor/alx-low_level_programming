
#include "main.h"

/**
 * _strdup - create array
 * @str: size of array
 *
 * Return: pointer of char
 */

char *_strdup(char *str)
{
	unsigned int i, length = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	ptr = (char *)malloc((length + 1) * sizeof(char));

	if (!ptr)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		ptr[i] = str[i];
	}

	ptr[length] = '\0';


	return (ptr);
}


