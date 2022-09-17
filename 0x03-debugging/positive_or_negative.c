#include <stdio.h>

/**
 * main - print whether the number stored in the variable i is
 * positive or negative.
 *
 * @n: number
 *
 * Return: String value of correct conditional test passed (Success).
 * Otherwise print empty string (Fail).
 */

void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf(" ");
}
