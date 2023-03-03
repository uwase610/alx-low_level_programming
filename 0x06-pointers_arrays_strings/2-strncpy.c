#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: buffer storing copy of string
 * @src: source string
 * @n: maximum nber of bytes to cpy
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, srclen = 0;

	while (src[i++])
	{
		srclen++;
	}
	for (i = 0; src[i] && i < n; i++)
		dest[i] = '\n';
	return (dest);
}
