#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * print_strings - The func to be build
  * @separator: separator
  * @n: nums of inputs
  * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lst;
	unsigned int i;
	char *s;

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(lst, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && n - i != 1)
			printf("%s", separator);
	}
				printf("\n");
				va_end(lst);
}
