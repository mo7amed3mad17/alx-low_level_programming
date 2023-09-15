#include "main.h"
#include <stdio.h>
/**
  *main - main entry
  *Description: fizzbuzz
  *Return: 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3) == 0)
		{
			printf("Fizz");
			continue;
		}
		else if ((x % 5) == 0)
		{
			printf("Buzz");
			continue;
		}
		else if (x == 100)
		{
			printf("Buzz");
		}
		else if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("FizzBuzz");
			continue;
		}
		printf("%d ", x);
	}
		printf("\n");
	return (0);
}
