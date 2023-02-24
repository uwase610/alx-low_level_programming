#include <stdio.h>
/**
 * main - print three digits number combination
 * Return: 0
 */
int main(void)
{
	int dgt1, dgt2, dgt3;

	for (dgt1 = '0'; dgt1 <= '9'; dgt1++)
	{
		for (dgt2 = dgt1 + 1; dgt2 <= '9'; dgt2++)
		{
			for (dgt3 = dgt2 + 1; dgt3 <= '9'; dgt3++)
			{
				if ((dgt2 != dgt1) != dgt3)
				{
					putchar(dgt1);
					putchar(dgt2);
					putchar(dgt3);
					if (dgt1 == '7' && dgt2 == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
