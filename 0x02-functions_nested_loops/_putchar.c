#include <unistd.h>
/**
 * _putchar - writes c to stdou
 * @c: character to print
 * Return: 1
 * error: -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
