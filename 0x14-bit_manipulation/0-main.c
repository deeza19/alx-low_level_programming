#include <stdio.h>
#include "main.h"

/**
 * main-check the code
 *
 * return: Always 0
 */
int main(void)
{
	unsigned int n;

	n = binary_to_uit("1");
	printf("%u\n", n);
	n = binary_to_uit("101");
	printf("%u\n", n);

	return (0);
}
