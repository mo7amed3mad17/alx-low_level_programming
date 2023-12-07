#include "lists.h"
/**
  * free_dlistint - The function to be built
  * @head: head of the list
  * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
