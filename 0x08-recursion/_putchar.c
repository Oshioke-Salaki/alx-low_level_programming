#include <unistd.h>

/**
 * _putchar - writes the character
 * @c: The character
 *
 * Return: On success
 * On error, -1 is
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
