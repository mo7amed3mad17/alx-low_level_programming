#include "main.h"
/**
  *_abs - compute the abs
  *@c: the computed num
  *Return: the abs or 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
		return (c);
}
