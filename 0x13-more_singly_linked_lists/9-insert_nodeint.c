#include "lists.h"
/**
  * insert_nodeint_at_index - The function to be built
  * @head: The first node
  * @idx: index of the wanted node
  * @n: the value of node
  * Return: ptr
 */
listint_t *insert_nodeint_at_index(listint_t **head,
		unsigned int idx, int n)
{	
	unsigned int i;
	listint_t *ptr = *head;
	listint_t *Nptr = malloc(sizeof(listint_t));

	if (!(head || Nptr))
	return (NULL);

	Nptr->n = n;
	Nptr->next = NULL;

	if (idx == 0)
	{
		Nptr->next = *head;
		*head = Nptr;
		return (Nptr);
	}

	for (i = 0; ptr && i < idx; i++)
	{
		if (i == idx - 1)
		{
			Nptr->next = ptr->next;
			ptr->next = Nptr;

			return (Nptr);
		}

		else
 		ptr = ptr->next;
	}
	return (NULL);
}
