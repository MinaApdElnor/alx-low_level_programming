#include "main.h"


/**
 * last_index - prints a string
 * @s: pointer to string
 *
 * Return: int value
 */

int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;

	return (n);

}


/**
 * check - prints a string
 * @s: pointer to string
 * @end: fjhf
 * @start: fjkf
 * @mod: kfj
 *
 * Return: int value
 */

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}


/**
 * is_palindrome - prints a string
 * @s: pointer to string
 *
 * Return: int value
 */

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}
