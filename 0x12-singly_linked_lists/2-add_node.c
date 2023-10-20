#include "lists.h"
/**
* _strlen - len of str
* @c : char
* Return: n
*/

int _strlen(const char *c)
{
	int n;

	for (n = 0; c[n] != '\0';)
	{
		n++;
	}
		return (n);
}

/**
* add_node - The func to be build
* @head: head
* @str: value of element
* Return: number of nodes
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));

	if (add == NULL)
	return (NULL);

	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
