#include "main.h"
/**
 * *_strncat - function that concatenates two strings
 * @dest: the destination of string
 * @src: the source of the pointed  string
 * @n: the integer of pointed string
 *
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_of_string, z;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (z = 0; z < n && src[z] != '\0'; z++, length_of_string++)
	{
		dest[length_of_string] = src[z];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
