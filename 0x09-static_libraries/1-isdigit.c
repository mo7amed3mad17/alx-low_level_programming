#include "main.h"
/**
  *_isdigit - The used function
  *@c: the checked
  *Return:1 if c is digit, o otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
