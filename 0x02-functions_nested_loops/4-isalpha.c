#include "main.h"
/**
 *_isalpha - Checks for alphabet
 *@c: the checked character
 *Return: 1 for alphapitic character, 0 for else
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
		return (0);
}
