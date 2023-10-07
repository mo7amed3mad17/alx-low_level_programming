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

	ptr = malloc(b);
	if (b >= INT_MAX || ptr == NULL)
		exit(98);

	return (ptr);
}
