#include "lists.h"
/**
  * reverse_listint - The function to be built
  * @head: The head node of the list
  * Return: list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}

	(*head) = prev;

	return (*head);
}
