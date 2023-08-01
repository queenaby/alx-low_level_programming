#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: parameter 1
 * @accept: parameter 2
 * Return: matched numbers
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
