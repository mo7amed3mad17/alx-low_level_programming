#include "lists.h"
/**
  * free_listint_safe - The function to be built
  * @h: ptr to list
  * Return: size_t
 */
size_t free_listint_safe(listint_t **h)
{
	unsigned int i = 0;

	for (i = 0; (*h)->next != NULL; i++)
	{
		free(*h);
	}
	return (i);
}
