#include "lists.h"
/**
  * sum_dlistint - sum of data
  * @head: head of list
  * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
