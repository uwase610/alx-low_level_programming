#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @dgt: number to be checked for last digit
 * Return: value of last digit
 */
int print_last_digit(int dgt)
{
	int last_dgt;

	last_dgt = dgt % 10;
	if (last_dgt < 0)
	{
		last_dgt *= -1;
	}
	_putchar(last_dgt + '0');
	return (last_dgt);
}
