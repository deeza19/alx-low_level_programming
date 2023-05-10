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
	int dec;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", ab[0]);
		exit(1);
	}

	dec = append_text_to_file(ab[1], ab[2]);
	printf("-> %i\n", dec);
	return (0);
}
