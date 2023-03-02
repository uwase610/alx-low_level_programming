#include <stdio.h>
/**
 * main - prints the sum of all multiples of 3 or 5 below 1024
 * Return: always (success)
 */
int main(void)
{
	int i, p = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			p += i;
		}
		i++;
	}
	printf("%d\n", p);
	return (0);
}
