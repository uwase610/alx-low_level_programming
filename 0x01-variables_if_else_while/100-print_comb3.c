#include <stdio.h>
/**
 * main - print different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int dgt, next;

	for (dgt = '0'; dgt <= '9'; dgt++)
	{
		for (next = dgt + 1; next <= '9'; next++)
		{
			if (dgt != next)
			{
				putchar(dgt);
				putchar(next);
				if (dgt == '8' && next == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
