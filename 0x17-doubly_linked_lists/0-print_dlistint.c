#include "lists.h"
/**
  * print_dlistint - The function to be built
  * @h: head of the list
  * Return: number of the nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
