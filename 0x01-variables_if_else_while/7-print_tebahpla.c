#include <stdio.h>
/**
 * main - program to print lowercase alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
		putchar(alph);
	putchar('\n');
	return (0);
}
