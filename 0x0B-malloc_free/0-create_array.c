#include "main.h"
#include <stdio.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: an input for the size of the array in int
 * @c: to store the strings of character
 *
 * Return: a pointer to the base character c
 */
char *create_array(unsigned int size, char c)
{
	size_t i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = mollac(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
