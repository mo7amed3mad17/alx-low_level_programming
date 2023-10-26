#include "main.h"

/**
  * _strlen - To get string length
  * @str: string
  * Return: int
 */
int _strlen(const char *str)
{
	int i = 0;

	while (*str++)
	i++;

	return (i);
}
