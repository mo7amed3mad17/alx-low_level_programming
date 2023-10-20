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

