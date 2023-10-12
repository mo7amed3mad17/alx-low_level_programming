#include "variadic_functions.h"
/**
  * sum_them_all - The func to be built
  * @n: input
  * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum, j;
	unsigned int i;
	va_list lst;

	if (n == 0)
		return (0);

	va_start(lst, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(lst, int);
		sum += j;
	}
	va_end(lst);
	return (sum);
}
