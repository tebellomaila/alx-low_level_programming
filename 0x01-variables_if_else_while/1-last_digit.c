#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the last digit of the number stored in the variable n.
 *
 * Return: String value of correct conditional test passed (Success).
 * Otherwise -1 (Fail)
 */
int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (ld > 5)
		printf("Last digit of %d is %d and greater than 5\n", n, ld);
	else if (ld == 0)
		printf("Last digit of %d is %d is 0\n", n, ld);
	else if (ld < 6)
		printf("Last digit of %d is %d is less than 6 and not 0\n",
				n, ld);
	else
		return (-1);
	return (0);
}
