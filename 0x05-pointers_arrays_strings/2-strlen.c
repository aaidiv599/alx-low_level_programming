#inlude "main.h"
/**
 * _strlen - this function return the lenght of a string
 *
 * @:s character of the strings
 *
 * Return: (0)
 */
int _strlen(char *s)
{
	int total_len;

	total_len = 0;
	while (s[total_len] != '\0')
	{
		total_len++;
	}
	return (total_len);
}
