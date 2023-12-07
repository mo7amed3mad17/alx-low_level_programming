#include "lists.h"
/**
  * dlistint_len - func to be built
  * @h: head of the list
  * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
