#include "main.h"
#include <stdio.h>

/**
 * _abs - computes
 * @n: the int to check
 * Return: the absolute value of int
 */
int _abs(int n)
{

	if (n < 0)
	{
		return (n * (-1));
	}

	else if (n == 0)
	{
		return (0);
	}

	else
	{
		return (n);
	}

}
