#include <stdio.h>
#include "main.h"

/**
 * main - print
 * @argc: number
 * @argv: array
 *
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
