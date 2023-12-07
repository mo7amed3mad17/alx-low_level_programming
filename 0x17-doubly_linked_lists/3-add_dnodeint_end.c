#include "lists.h"
/**
  * add_dnodeint_end - The function to be built
  * @head: head of the list
  * @n: data to be added
  * Return: head of new list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = NULL;
	ptr = *head;

	if (ptr != NULL)
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
			ptr->next = new;
	}

	else
	{
		*head = new;
	}
	new->prev = ptr;
	return (new);
}
