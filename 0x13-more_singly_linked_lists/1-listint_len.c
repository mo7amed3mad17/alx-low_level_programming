#include "lists.h"

/**
  * listint_len - The function to be built
  * @h: The head
  * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

