#include "main.h"
/**
 * _islower - check for lowercase character
 * @c: character to be checked
 * Return: 1 for lowercase and 0 if anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
