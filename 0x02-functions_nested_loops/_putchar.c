#include <unistd.h>

/**
 * _putchar - Write character to standard output.
 *
 * @c: character argument
 *
 * Return: Always return 0 (Success). Otherwise -1 (Fail)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
