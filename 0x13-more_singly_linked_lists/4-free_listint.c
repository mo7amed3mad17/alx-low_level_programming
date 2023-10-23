#include "lists.h"

/**
  * free_listint - The function to be built
  * @head: pointer to node
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
