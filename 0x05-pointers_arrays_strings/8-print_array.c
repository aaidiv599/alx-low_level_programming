#include "main.h"
/**
 * print_array - function that prints n
 * elements of an array of integers
 *
 * @a: array to be used
 * @n: number of element to be printed
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
