#include "lists.h"
/**
  * add_nodeint_end - The function to be built
  * @head: head ptr
  * @n: the data
  * Return: node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	last = *head;

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		while (last->next != NULL)
		last = last->next;


		last->next = new;
		return (new);
	}
}
