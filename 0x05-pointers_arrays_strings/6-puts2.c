#include "main.h"
/**
 * puts2 - print character of a string
 * @str: input
 * Return: 0
 */
void puts2(char *str)
{
	int j;

	for (j = 0 ; str[j] != '\0' ; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
