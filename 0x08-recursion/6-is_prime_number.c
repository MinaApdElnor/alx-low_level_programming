#include "main.h"
#include <stdio.h>


/**
 * check_prime - prints a string
 * @n: pointer to string
 * @othrn: lf
 *
 * Return: int value
 */

int check_prime(int n, int othrn)
{
	if (othrn >= n && n > 1)
		return (1);
	else if (n % othrn == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, othrn + 1));
}


/**
 * is_prime_number - prints a string
 * @n: pointer to string
 *
 * Return: int value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
