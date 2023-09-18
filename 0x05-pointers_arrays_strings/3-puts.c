#include "main.h"
/**
  * _puts - The used func
  * @str: input
  * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
