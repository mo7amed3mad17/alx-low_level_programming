#include "main.h"
/**
  * get_bit - The function tobe built
  * @n: The Num
  * @index: is the index
  * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int v, c;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);

	v = 1 << index;
	c = n & v;

	if (c == v)
	return (1);

	return (0);
}
