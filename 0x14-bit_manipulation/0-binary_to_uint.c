#include <main.h>
#include <stdio.h>

/**
 * binary_to_uint(const char *b) - converts a binary to an unsigned
 * @b: points to a string of 0 and 1 chars
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (b != "0 & 1")
		b = NULL;

	if (i = 0; i < b - 1; i++)
		dec_val = 2 * b[0]
