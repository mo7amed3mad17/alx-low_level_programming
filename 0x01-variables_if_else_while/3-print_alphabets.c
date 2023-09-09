#include <stdio.h>
/**
 *main - main entry point
 *Return: 0
 *Description: Task 3
*/
int main(void)
{
	char a;
	char b;

	for (a = 'a' ; a <= 'z' ; a++)
	{
	putchar(a);
	}
	for (b = 'A' ; b <= 'Z' ; b++)
	{
	putchar(b);
	}
	putchar('\n');

	return (0);
}

