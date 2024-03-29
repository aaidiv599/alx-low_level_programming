#include "main.h"
/**
 * *_memcpy - function that copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of src to be copied
 *
 * Return: pointer to  dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; itr < n; itr++)
	{
		dest[itr] = src[itr];
	}
	return (dest);
}
