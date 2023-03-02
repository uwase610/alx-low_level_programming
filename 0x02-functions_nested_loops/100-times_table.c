#include "main.h"
/**
 * print_times_table - prints n times table starting from 0
 * @n: number of times
 */
void print_times_table(int n)
{
	int nber, mult, pdct;

	if (n >= 0 && n <= 15)
	{
		for (nber = 0; nber <= n; nber++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				pdct = nber * mult;
				if (pdct <= 99)
					_putchar(' ');
				if (pdct <= 9)
					_putchar(' ');
				if (pdct >= 100)
				{
					_putchar((pdct / 100) + '0');
					_putchar((pdct / 10) % 10 + '0');
				}
				else if (pdct <= 99 && pdct >= 10)
				{
					_putchar((pdct / 10) + '0');
				}
				_putchar((pdct % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
