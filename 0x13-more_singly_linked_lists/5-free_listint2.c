#include "lists.h"
/**
  * free_listint2 - The function to be built
  * @head: Node
  * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
