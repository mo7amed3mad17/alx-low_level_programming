#include "main.h"
/**
 *print_alphabet - prints alphabet
 *Description: prints
 *Return: 0
*/
void print_alphabet_x10(void)
{
	char i;
	int n;

	n = 0;

	while (n < 10)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
		n++;
	}
}

