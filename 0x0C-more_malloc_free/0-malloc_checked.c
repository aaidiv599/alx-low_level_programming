#include "main.h"
#include <stdio.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: store int
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
