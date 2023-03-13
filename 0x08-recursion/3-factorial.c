#include "main.h"
/**
 * factorial - factorial of a given number
 * @n: given number
 * Return: 0, otherwise -1 when n < 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
