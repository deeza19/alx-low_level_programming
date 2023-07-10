#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the code
 *
 * Return: Always 0
 */
int main(int ac, char **ab)
{
	ssize_t n;

	if (ac != 2)
	{
		dprintf(2, "Usage: %s filename\n", ab[0]);
		exit(1);
	}
	n = read_textfile(ab[2], 114);
	printf("\nprinted chars: %li)\n", n);
	return (0);
}