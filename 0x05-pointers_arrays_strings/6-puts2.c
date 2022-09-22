#include "main.h"

/**
 * puts2 - prints one character only at a time
 *
 * @str: string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (; str[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
