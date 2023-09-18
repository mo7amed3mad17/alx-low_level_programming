#include "main.h"
/**
  *_strlen - The used func
  *@s: input
  *Return: int
  */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}
