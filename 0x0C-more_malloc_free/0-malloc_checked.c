#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
  * malloc_checked - The used func
  * @b: The number of bytes to be allocated
  * Return: void pointer
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b >= INT_MAX)
		exit(98);
	else
	ptr = malloc(b);
	return (ptr);
}
