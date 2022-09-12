#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program will assign a random number to the variable n each time
 * it is executed.Print whether the number stored in the variable n is
 * positive or negative.
 *
 * Return: String value of correct conditional test passed (Success).
 * Otherwise -1 (Fail).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		return (-1);
	return (0);
}
