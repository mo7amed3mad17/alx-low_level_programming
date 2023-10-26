#include "main.h"

/**
 * _pow - To find (Base ^ power )
 * @base: base
 * @power: power
 * Return: value
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned int i;
	unsigned long int n;

	n = 1;
	for (i = 1; i <= power; i++)
		n *= base;

	return (n);
}
