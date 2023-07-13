#include "main.h"

/**
 * _isdigit - checks digit through 0~9
 *
 * Return: 1 if digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
