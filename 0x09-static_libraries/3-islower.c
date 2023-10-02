#include "main.h"
/**
  *_islower - checks lowercase
  *@c: the checked character
  *Return: 1 for lowercase, 0 for else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
