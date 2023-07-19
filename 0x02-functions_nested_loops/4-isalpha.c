#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: parameter
 * Return: return 1 success 0 fail
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'))
		return (1);
	else
		return (0);
}

