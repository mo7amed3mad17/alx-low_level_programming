#include "lists.h"
/**
  * pop_listint - The func to be built
  * @head: The head node
  * Return: int
*/
int pop_listint(listint_t **head)
{
	int i;
	listint_t *Nptr = *head;

	if (*head == NULL)
	return (0);

	*head = (*head)->next;
	i = Nptr->n;
	free(Nptr);
	return (i);
}
