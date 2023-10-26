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
	unsigned long int n = 1;

	for (i = 1; i <= power; i++)
	n = n * base;

	return (n);
}

/**
  * print_binary - The function to be built
  * @n: The decimal number
  * Return: void
 */
void print_binary(unsigned long int n)
{
	char s = 0;
	unsigned long int v, c;

	v = _pow(2, sizeof(unsigned long int) * 8 - 1);

	while (v != 0)
	{
		c = n & v;

		if (c == v)
		{
			s = 1;
			_putchar(49);
		}

		else if (s == 1 || v == 1)
		_putchar(48);

		v = v >> 1;
	}
}
