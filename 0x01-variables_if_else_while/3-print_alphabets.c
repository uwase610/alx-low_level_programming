#include <stdio.h>
/**
 * main - program to print lowercase and uppercase alphabets
 * Return: 0
 */
int main(void)
{
	char alph1, alph2;

	for (alph1 = 'a'; alph1 <= 'z'; alph1++)
	putchar(alph1);
	for (alph2 = 'A'; alph2 <= 'Z'; alph2++)
	putchar(alph2);
	putchar('\n');
	return (0);
}
