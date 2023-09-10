#include <stdio.h>
/**
  *main - Entry Point
  *Description: comb
  *Return: 0
*/
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		if (a < 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
		putchar('\n');
	return (0);
}
