#include "lists.h"
/**
* free_list - The function to be build
* @head: A pointer
*/
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);

		if (head->str != NULL)
		free(head->str);

		free(head);
	}
}
