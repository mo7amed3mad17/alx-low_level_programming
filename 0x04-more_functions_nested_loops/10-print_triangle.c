#include "main.h"
/**
  *print_triangle - used func
  *@size: input
  *Return: void
 */
void print_triangle(int size)
{
	int x;
	int s;
	int q;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
		for (q = size - x; q > 1; q--)
		{
			_putchar(' ');
		}
		for (s = 0; s <= x; s++)
		{
			_putchar('#');
		}
			_putchar('\n');
	}
	}
}
