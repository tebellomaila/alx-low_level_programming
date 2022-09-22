#include <stdio.h>

/**
 * rev_string -reverses a string
 *
 * @s: string
 *
 * Return: void
 */
void rev_string(char *s)
{
	char rev;
	int c;
	int i;

	rev = s[0];
	c = 0;


	while (s[c] != '\0')
	{
		c++;
	}
	for (i = 0; i < c; i++)
	{
		c--;
		rev = s[i];
		s[i] = s[c];
		s[c] = rev;
	}
}
