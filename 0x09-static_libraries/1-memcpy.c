#include "main.h"
/**
  *_memcpy - The used func
  *@dest: input
  *@src: input
  *@n: num
  *Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
		return (dest);
}
