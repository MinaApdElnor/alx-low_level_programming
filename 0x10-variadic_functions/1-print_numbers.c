#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: ksj
 * @n: int ope
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list values;

	va_start(values, n);

	for (count = 0; count < n; count++)
	{
		int each_value = va_arg(values, const unsigned int);

		printf("%d", each_value);
		if (separator != NULL)
		{
			if (count < (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	va_end(values);
	printf("\n");
}
