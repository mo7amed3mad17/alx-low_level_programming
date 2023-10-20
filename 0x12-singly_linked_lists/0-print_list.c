#include "lists.h"

/**
  * print_list - The function to be build
  * @h: pointer to the wanted list
  * Return: The num of nodes
 */
size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h;)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
			i++;
			h = h->next;
	}
			return (i);
}
