#include "main.h"
/**
 * str_concat - create array
 * @s1: size of array
 * @s2: the character
 *
 * Return: pointer of char
 */
char *str_concat(char *s1, char *s2)
{
	int length1 = 0;
	int length2 = 0;
	int totalength = 0;
	char *ptr;
	int i;

	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;
	totalength = length1 + length2;
	ptr = (char *)malloc((totalength + 1) * sizeof(char));
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < length2; i++)
	{
		ptr[i + length1] = s2[i];
	}
	ptr[totalength] = '\0';
	return (ptr);
}


