#include "lists.h"
/**
  * sum_listint - The function to be built 
  * @head: The first node
  * Return: int
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	if (head == NULL)
	return (0);

	for (; ptr != NULL;)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
