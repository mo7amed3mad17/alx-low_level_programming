#include "lists.h"
/**
  * delete_dnodeint_at_index - The function to be built
  * @head: head of the list
  * @index: index of the node
  * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *temp2;
	unsigned int i = 0;

	if (temp != NULL)
		while (temp->prev != NULL)
			temp = temp->prev;

	while (temp != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = temp->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				temp2->next = temp->next;

				if (temp->next != NULL)
					temp->next->prev = temp2;
			}

			free(temp);
			return (1);
		}
		temp2 = temp;
		temp = temp->next;
		i++;
	}

	return (-1);
}
