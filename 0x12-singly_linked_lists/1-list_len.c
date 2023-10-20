#include "lists.h"
/**
  * list_len - The function to be build
  * @h: wanted list
  * Return: len
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h;)
	{
		i++;
		h = h->next;
	}

	return (i);
}
