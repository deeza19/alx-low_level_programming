#include "main.h"
#include <stdio.h>
/**
 * main - checks the code
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int x;

	x = 200;
	flip_bits(200, 8);
	printf("%u\n", x);

	return (0);
}
