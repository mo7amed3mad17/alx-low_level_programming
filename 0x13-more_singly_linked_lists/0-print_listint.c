#include "lists.h"

/**
  * print_listint - The function to be built
  * @h: The node to be printed
  * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
