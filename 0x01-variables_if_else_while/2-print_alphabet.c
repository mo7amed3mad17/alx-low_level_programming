#include <stdio.h>
/**
 *main - main entry point
 *Return: 0
 *Description: Task 3
*/
int main(void)
{
	char a;
	char A;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		putchar(a);
	}
	for (A = 'A' ; A <= 'Z' ; A++)
	{
		putchar(A);
	}
		putchar('\n');

	return (0);
}

