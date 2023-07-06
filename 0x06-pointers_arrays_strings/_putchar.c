#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the char c to the stdout
 * @c: character to print
 *
 * Return: 1 if Success , -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
