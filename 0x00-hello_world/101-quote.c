#include <unistd.h>

/**
 * main - the entry point
 *
 * Description : program prints a sequense by using write
 *
 * Return: return 1 (Success)
 */

int main(void)
{
	char seq[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, seq, 59);
	return (1);
}
