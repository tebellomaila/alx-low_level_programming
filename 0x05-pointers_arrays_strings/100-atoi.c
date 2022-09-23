#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */

int _atoi(char *s)
{
	int sym;
	int res;
	int n;
	int i;

	sym = 1;
	res = 0;


	for (n = 0; !(s[n] >= 48 && s[n] <= 57); n++)
	{
		if (s[n] == '-')
		{
			sym *= -1;
		}
	}

	for (i = n; s[i] >= 48 && s[i] <= 57; i++)
	{
		res *= 10;
		res += (s[i] - 48);
	}

	return (sym * res);
}
