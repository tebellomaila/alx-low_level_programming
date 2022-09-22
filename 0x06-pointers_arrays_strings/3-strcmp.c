#include "main.h"

/**
 * _strcmp - compares the two strings
 *
 * @s1: string
 * @s2: string
 *
 * Return: return negative integer if s1 is less than s2.
 * return zero  if s1 is equal to s2. Otherwise return positive integer
 * if s2 is greater than s1.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	if (s1[i] == s2[i])
		return (0);

	return (s1[i] - s2[i]);
}
