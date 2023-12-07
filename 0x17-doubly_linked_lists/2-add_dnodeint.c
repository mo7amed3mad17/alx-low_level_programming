#include "lists.h"
/**
  * add_dnodeint - The function to be built
  * @head: head of the list
  * @n: the data to be added
  * Return: head of new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *h;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->prev = NULL;
	h = *head;

	while (h != NULL && h->prev != NULL)
	h = h->prev;

	ptr->next = h;

	if (h != NULL)
	h->prev = ptr;

	*head = ptr;

	return (ptr);
}
