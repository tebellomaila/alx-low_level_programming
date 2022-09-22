#include "main.h"

/**
 * *_strncpy - copies a string
 *
 * @dest: the pointer to char dest
 * @src: the pointer to char src
 * @n: number of characters
 *
 * Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
