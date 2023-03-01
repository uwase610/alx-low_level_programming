#include "main.h"
/**
 * _abs - compute absolute value of an integer
 * @val: integer to compute
 * Return: absolute value of nber or number
 */
int _abs(int val)
{
	if (val < 0)
	{
		int abs_val;

		abs_val = val * -1;
		return (abs_val);
	}
	return (val);
}
