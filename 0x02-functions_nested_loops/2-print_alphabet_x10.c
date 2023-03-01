#include "main.h"
/**
 * print_alphabet_x10 - function for printing alphabets 10 times
 * Returns: void
 */
void print_alphabet_x10(void)
{
	char alph;
	int i = 0;

	while (i <= 9)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
		i++;
	}
}
