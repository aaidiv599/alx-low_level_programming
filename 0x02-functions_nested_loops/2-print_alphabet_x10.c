#include "main.h"
/**
 * print_alphabet - print alpabets
 *
 */
void print_alphabet_x10(void)
{
	char i = 'a';
	char j = '0';
	while ( i <= 'z')
	{
		while ( j <= '9')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}

