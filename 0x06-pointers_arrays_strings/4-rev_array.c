#include "main.h"

/**
 * reverse_array - reverse the content of the array
 *
 * @a: array
 * @n: size of array
 *  Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n; i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
