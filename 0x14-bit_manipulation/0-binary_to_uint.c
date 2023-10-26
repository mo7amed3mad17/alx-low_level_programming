#include "main.h"

/**
 * binary_to_uint - The function to be built
 * @b: The binary number
 * Return: Uint
*/

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned long int n = 0;

	if (!b)
	return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		n <<= 1;

		if (b[i] == '1')
		n += 1;
	}

/*
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			n += _pow(2, length - 1 - i);
		}
	}
*/
	return (n);
}
