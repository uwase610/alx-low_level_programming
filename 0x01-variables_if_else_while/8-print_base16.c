#include <stdio.h>
/**
 * main - printing numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int dgt;
	char lttr;

	for (dgt = '0'; dgt <= '9'; dgt++)
		putchar(dgt);
	for (lttr = 'a'; lttr <= 'f'; lttr++)
		putchar(lttr);
	putchar('\n');
	return (0);
}
