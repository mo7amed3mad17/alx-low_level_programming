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

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = *head;
	ptr->prev = NULL;
	*head = ptr;

	if (ptr == NULL)
	return (NULL);

	return (ptr);
}
