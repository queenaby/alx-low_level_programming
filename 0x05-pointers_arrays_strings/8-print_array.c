#include "main.h"

/**
 * print_array - function that print n elements of an array of integers
 * @n: parameter to be printed
 * @a: array to be printe
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d". a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}

