#include "main.h"
#include <stdlib.h>
/**
  * _realloc - The function to be built
  * @ptr: ptr to prev memory
  * @old_size: ptr size in bytes
  * @new_size: the new size
  * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *Nptr;
	char *Optr = ptr;
	unsigned int i, j = new_size;

	if (ptr == NULL)
	{
		Nptr = malloc(new_size);
		return (Nptr);
	}

	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	else if (new_size == old_size)
	return (ptr);

	Nptr = malloc(new_size);

	if (Nptr == NULL)
	return (NULL);

	if (new_size > old_size)
	j = old_size;

	for (i = 0; i < j; i++)
	Nptr[i] = Optr[i];

	free(ptr);

	return (Nptr);
}
