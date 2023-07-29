#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: parameter
 * Return: 0
 */

void puts_half(char *str)
{
	int i, a, count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	a = (count - 1) / 2;
	for (i = a + 1 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
