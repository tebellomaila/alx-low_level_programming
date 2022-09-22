#include "main.h"

/**
 * puts_half - prints one character only a time
 *
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len;

	len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
