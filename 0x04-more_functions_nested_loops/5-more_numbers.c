#include "main.h"
/**
  *more_numbers - The used function
  *Return: void
 */
void more_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		int b = 0;

		while (b <= 14)
	{
			if (b > 9)
	{
				_putchar((b / 10) + 48);
	}
			_putchar((b % 10) + 48);
			b++;
	}
		_putchar('\n');
		a++;
	}
}

