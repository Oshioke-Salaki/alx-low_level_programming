#include "main.h"

/**
 * *_memcpy - c
 * @dest: destination memory area
 * @src: source of memory
 * @n: number
 *
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
