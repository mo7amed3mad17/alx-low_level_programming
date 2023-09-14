#include "main.h"
/**
  *print_line - The used function
  *@n: The countant
  *Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		if (n <= 0)
		{
			continue;
		}
			_putchar('_');
			n--;
	}
		_putchar('\n');
}
