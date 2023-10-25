#include "lists.h"

/**
  * find_listint_loop - The function to be built
  * @head: ptr to the first node
  * Return: node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head;
	listint_t *second = head;

	if (!head)
	return (NULL);

	while (second && first && first->next)
	{
		first = first->next->next;
		second = second->next;
		if (first == second)
		{
			 head = second;
			 second = first;
			while (1)
			{
				first = second;
				while (first->next != head && first->next != second)
				{
					first = first->next;
				}
				if (first->next == head)
				break;

				head = head->next;
			}
			return (first->next);
		}
	}
	return (NULL);
}
