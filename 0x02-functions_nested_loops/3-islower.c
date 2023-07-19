#include "main.h"
/**
 *  _islower - to check for lower case character
 * @c: parameter to be checked
 * Return: 1 success 0 failure
 */
int _islower(int c)
{
	if (c >= 'a' && c  <= 'z')
		return (1);
	else
		return (0);
}
