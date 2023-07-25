#include "main.h"

/**
 * create_array - create array
 * @size: size of array
 * @c: the character
 *
 * Return: pointer of char
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *)malloc(size);

	if (!ptr)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);

}


