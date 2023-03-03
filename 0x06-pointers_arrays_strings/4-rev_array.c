#include "main.h"
/**
 * reverse_array - reverse content of an array of integers
 * @a: array of integers
 * @n: nber of elements of an array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
