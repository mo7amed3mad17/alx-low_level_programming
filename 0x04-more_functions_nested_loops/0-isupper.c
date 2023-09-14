#include "main.h"

/**
  *_isupper - function to check upper or not
  *@c: the checked element
  *Return: if upper 1, if not 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
