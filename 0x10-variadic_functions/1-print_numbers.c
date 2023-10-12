#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
  * print_numbers - The func to be built
  * @separator: string between nums
  * @n: num of inputs
  * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lst, int));
		if (separator != NULL && n - i != 1)
		printf("%s", separator);
	}
		printf("\n");
		va_end(lst);
}
