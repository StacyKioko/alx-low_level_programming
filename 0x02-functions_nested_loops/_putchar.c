#include <unistd.h>

/**
 * _putchar -writes the character c to stdout
 *
 * Return : Always (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
