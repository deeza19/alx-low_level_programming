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

	z = 60;
	set_bit(&z, 4);
	printf("%lu\n", z);
	return (0);
}
