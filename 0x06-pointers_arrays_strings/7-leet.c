#include "main.h"

/**
 * leet - encode into 1337
 *
 * @n: array of characters
 *
 * Return: pointer to n
 */
char *leet(char *n)
{
	int i;
	int j;

	char C1[] = "aAeEoOtTlL";
	char C2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == C1[j])
			{
				n[i] = C2[j];
			}
		}
	}

	return (n);
}
