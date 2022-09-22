#include "main.h"

/**
 * *_strncat - concatenates the two strings
 *
 * @dest: the pointer to char dest
 * @src: the pointer to char src
 * @n: number of bytes
 *
 * Return: the ponter to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	*(dest + i) = '\0';

	return (dest);
}
