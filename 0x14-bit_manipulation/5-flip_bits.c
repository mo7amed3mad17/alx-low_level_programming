#include "main.h"

/**
 * flip_bits - The function to be built
 * @n: first number
 * @m: second number
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, t = 0;
	unsigned long int c, x = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		c = x >> i;

		if (c & 1)
		t++;
	}

	return (t);
}
