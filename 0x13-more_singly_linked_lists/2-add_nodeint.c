#include "lists.h"
/**
  * add_nodeint - The function to be built
  * @head: pointer to the head node
  * @n: The value in the node
  * Return: pointer to node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));


	new->n = n;
	new->next = *head;

	*head = new;


	return (new);
}
