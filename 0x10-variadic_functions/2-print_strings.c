#include <stdarg.h>
#include <stdio.h>


/**
 * print_strings- print numbers
 * @separator: ksj
 * @n: int ope
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list string_list;

	va_start(string_list, n);

	for (count = 0; count < n; count++)
	{
		char *each_string = va_arg(string_list, char *);

		if (each_string == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", each_string);
		}
		if (separator != NULL && count < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(string_list);
	printf("\n");
}
