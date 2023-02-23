#include <stdio.h>
/**
 * main - printing single-digit numbers separated with , and space
 * Return: 0
 */
int main(void)
{
	int dgt;

	for (dgt = '0'; dgt <= '9'; dgt++)
	{
		putchar(dgt);
		if (dgt != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
