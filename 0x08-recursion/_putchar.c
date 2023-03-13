#include <unistd.h>

int _putchar(int c)
{
	return write(STDOUT_FILENO, &c, 1);
}
