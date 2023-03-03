#include "main.h"
/**
 * *_strncat - concatenate two strings using input nber of bytes from src
 * @dest: string to append on
 * @src: the string to append
 * @n: nber of bytes from src to append
 * Return: a pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, destlen = 0;

	while (dest[i++])
		destlen++;
	for (i = 0; src[i] && i < n; i++)
		dest[destlen++] = src[i];
	return (dest);
}
