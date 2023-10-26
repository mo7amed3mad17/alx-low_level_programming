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
		if (b[i] != 48 && b[i] != 49)
		return (0);
	}

	for (i = 0 ; b[i] != '\0'; i++)
	n = n * 2 + (b[i] - 48);

	return (n);
}
