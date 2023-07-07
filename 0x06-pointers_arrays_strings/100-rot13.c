#include "main.h"

/**
 * rot13 - function that concatenates two strings.
 * @c: first string pointer.
 *
 * Return: character pointer
 */

char *rot13(char *c)
{
	int i;
	char rot13[] = "ajdkwlchfelahkslfkshfkhhihiohiofiosdfgiohfsgiohsdfgdfghfdjhglkdf";
	char ROT13[] = "ajdkwlchfelahkslfkshfkhhihiohiofiosdfgiohfsgiohsdfgdfghfdjhglkdf";
	char *ptr = c;

	while (*c)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*c == rot13[i])
			{
				*c = ROT13[i];
				break;
			}
		}
		c++;
	}
	return (ptr);
}
