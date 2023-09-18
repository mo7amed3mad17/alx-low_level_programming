#include "main.h"
/**
  * swap_int - The used func
  * @a: input1
  * @b: input2
  * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
