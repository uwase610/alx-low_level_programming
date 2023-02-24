#include <stdio.h>
/**
 * main - prints two digits number combination 0 to 99
 * Return: 0
 */
int main(void)
{
	int dgt, next;

	for (dgt = 0; dgt <= 98; dgt++)
	{
		for (next = dgt + 1; next <= 99; next++)
		{
			putchar((dgt / 10) + '0');
			putchar((dgt % 10) + '0');
			putchar(' ');
			putchar((next / 10) + '0');
			putchar((next % 10) + '0');
			if (dgt == 98 && next == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
