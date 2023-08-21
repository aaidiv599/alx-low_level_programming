#include "main.h"
/**
 * swap_int - this swap the value of two integers
 *
 * @a: value of first pointer
 * @b: value of second pointer
 *
 */
void swap_int(int *a, int *b)
{
	int empty;
	int *c = &empty;

	*c = *a;
	*a = *b;
	*b = *c;
}
