#include "lists.h"

/**
  * print_listint_safe - The function to be built 
  * @head: The first node
  * Return: size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int i = 1;

	while (head)
	{
		if (head->next == NULL)
		exit (98);

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		i++;
	}
	return (i);
}
