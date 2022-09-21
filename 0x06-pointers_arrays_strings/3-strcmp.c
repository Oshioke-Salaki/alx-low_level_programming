#include "main.h"

/**
 * _strcmp - comp
 * @s1: fir
 * @s2: second
 *
 * Return: less
 * more
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
