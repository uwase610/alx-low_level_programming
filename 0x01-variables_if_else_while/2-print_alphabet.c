#include <stdio.h>
/**
 * main - Program that prints alphabets in lowercase using putchar
 * Return: 0
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
		putchar('\n');
	}
	return (0);
}
