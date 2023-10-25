#include "main.h"
#include <stdlib.h>
/**
 * argstostr - The function to be built
 * @ac: input
 * @av: array
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	char *Sptr;
	int i, j;
	int k = 0, l = 0;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		l++;
	}

	l = l + ac;
	Sptr = malloc((sizeof(char) * l) + 1);

	if (Sptr == NULL)
	return (NULL);
                
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			Sptr[k] = av[i][j];
			k++;
		}

		if (Sptr[k] == '\0')
		{
			Sptr[k++] = '\n';
		}
	}       
	return (Sptr);
}
