#include "lists.h"

/**
 * get_dnodeint_at_index - Function to be built
 * @head: head of the list
 * @index: input
 * Return: node
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ind = 0;
	dlistint_t *tmp;

	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
		if (index == ind)
		return (tmp);
		ind++;
		tmp = tmp->next;
	}
	return (NULL);
}
