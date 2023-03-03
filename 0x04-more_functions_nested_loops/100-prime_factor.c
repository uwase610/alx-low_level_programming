#include <stdio.h>
#include <math.h>
/**
 * main - print largest prime factor of nber 612852475143
 * Return: 0
 */
int main(void)
{
	long i, max_fact;
	long n = 612852475143;
	double square = sqrt(n);

	for (i = 1; i <= square; i++)
	{
		if (n % i == 0)
		{
			max_fact = n / i;
		}
	}
	printf("%ld\n", max_fact);
	return (0);
}
