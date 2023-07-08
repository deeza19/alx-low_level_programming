#include "main.h"
#include <stdio.h>
/**
 * main - checks the code
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int z;
	z = 426;
	clear_bit(&z, 23);
	printf("%lu\n", z);

	return (0);
}