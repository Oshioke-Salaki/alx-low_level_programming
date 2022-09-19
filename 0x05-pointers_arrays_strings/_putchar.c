#include <unistd.h>

/**
 * _putchar - writes
 * @c: the ch
 *
 * Return: 1.
 * On error, -1 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
