#include <unistd.h>

/**
 * _putchar - write character to standard output.
 *
 * Return: Always return 0 (Success). Otherwise -1 (Fail)
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}
