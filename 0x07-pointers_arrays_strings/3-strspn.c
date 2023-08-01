#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: parameter 1
 * @accept: parameter 2
 * Return: return matched numbers
 */

unsigned int _strspn(char *s, char *accept)
{
	int j, k;

	for (j = 0 ; s[j] != '\0' ; 0 ; j++)
	{
		for (k = 0 ; s[j] != accept[k] ;  k++)
		{
			if (accept[k] == '\0')
				return (j);
		}
	}
	return (0);
}
