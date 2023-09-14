#include "main.h"
/**
  *print_diagonal - The used function
  *@n: The countant
  *Return: void
 */
void print_diagonal(int n)
{
	int r;
	int s;

	if (n <= 0)
		_putchar('\n');
	else
	{
	for (r = 1; r <= n; r++)
	{
		for (s = 1; s < r; s++)
		{
			_putchar(' ');
		}
			_putchar('\\');
			_putchar('\n');
	}
	}

		_putchar('\n');

}

