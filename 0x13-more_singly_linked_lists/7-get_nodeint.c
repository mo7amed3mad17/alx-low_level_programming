#include "lists.h"
/**
  * get_nodeint_at_index - The function to be built
  * @head: The first node
  * @index: Index num
  * Return: node value
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr = head;

	for (i = 1; ptr && i <= index; i++)
	{
		ptr = ptr->next;
	}
	if (ptr == NULL)
	return (NULL);
	return (ptr);
}
