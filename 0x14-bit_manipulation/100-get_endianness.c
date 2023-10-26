#include "main.h"

/**
 * get_endianness - The function to be built
 * Return: int
*/

int get_endianness(void)
{
	int i = 1;
	char *s;

	s = (char *)&i;
	return (*s);
}
