#include "main.h"

/**
 * set_bit - The function to be built
 * @n: number to set
 * @index: index
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);

	b = 1 << index;
	*n = *n | b;

	return (1);
}
