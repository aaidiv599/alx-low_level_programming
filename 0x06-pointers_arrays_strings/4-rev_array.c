#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: 0
 *
 */
void reverse_array(int *a, int n)
{
	int temporary, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temporary = a[counter];
		a[counter++] = a[n];
		a[n--] = temporary;
	}
}
