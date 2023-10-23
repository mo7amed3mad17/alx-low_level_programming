#include "lists.h"
/**
  * delete_nodeint_at_index - The function to be built
  * @head: The first node
  * @index: index
  * Return: i
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *Nptr = NULL;
	listint_t *ptr = *head;


	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (!ptr || !(ptr->next))
		return (-1);

		ptr = ptr->next;
	}
	Nptr = ptr->next;
	ptr->next = Nptr->next;
	free(Nptr);
	return (1);
}
