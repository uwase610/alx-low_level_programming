#include "main.h"
/**
 * _isalpha - check if character is alphabet
 * @c: character to be checked
 * Return: 1 if c is a letter or 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
