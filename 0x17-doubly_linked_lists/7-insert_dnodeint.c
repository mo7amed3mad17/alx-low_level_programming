#include "lists.h"
/**
  * insert_dnodeint_at_index - The function to be built
  * @h: head of the list
  * @idx: index
  * @n: data
  * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new = NULL;
	dlistint_t *temp2;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	return (NULL);

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	else if  (idx != 0)
	{
		new->n = n;
		while (idx != 1)
		{
			temp = temp->next;
			idx--;
		}

		if (temp->next == NULL)
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		temp2 = temp->next;
		if (new != NULL && temp != NULL && temp2 != NULL)
		{
			new->next = temp2;
			temp->next = new;
			temp2->prev = new;
			new->prev = temp;
			return (new);
		}
	return (new);
	}
	else
	return (NULL);
}
