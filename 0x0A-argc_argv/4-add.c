#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: value of arguments
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *ptr;

	while (--argc)
	{
		for (ptr = argv[argc]; *ptr; ptr++)
			if (*ptr < '0' || *ptr > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}


