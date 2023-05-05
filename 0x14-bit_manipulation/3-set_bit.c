#include "main.h"
/**
 * set_bit(unsigned long int *n. unsigned int index) - sets the value of a bit
 * @index: index of the bit
 * @n: pointer to the number to set
 *
 * Return: On success 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
