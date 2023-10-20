#include "lists.h"
/**
 * _strlen - len of str
 * @c : char
 * Return: n
*/

int _strlen(const char *c)
{
	int n;

	for (n = 0 ; c[n] != '\0';)
	{
		n++;
	}
		return (n);
}

/**
* add_node_end - The function to be build
* @head: linked list
* @str: value of node
*
* Return: pointer to the new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *extra;

	if (str == NULL)
	return (NULL);

	n = malloc(sizeof(list_t));

	if (n == NULL)
	return (NULL);

	n->str = strdup(str);

	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}

	n->len = _strlen(n->str);
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
		extra = *head;

	while (extra->next)
	extra = extra->next;

	extra->next = n;

	return (n);
}
