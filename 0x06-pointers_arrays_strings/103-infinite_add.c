#include "main.h"
/**
 * infinite_add - function that adds two numbers
 * @nl: first integer
 * @n2: second integer
 * @r: result
 * @size_r: result length
 * Return: sum
 */
char *infinite_add(char *nl, char *n2, char *r, int size_r)
{
	/* local variable decleration */
	int i = 0, j = 0, k,
	l = 0, f, s, d = 0;

	while (nl[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		l = i;
	else
		l = j;
	if (l + 1 > size_r)
		return (0);
	r[l] = '\0';
	for (k = l - 1; k >= 0; k--)
	{
		i--;
		j--;
		if (i >= 0)
			f = nl[i] - '0';
		else
			f = 0;
		if (j >= 0)
			s = n2[j] - '0';
		else
			s = 0;
		r[k] = (f + s + d) % 10 + '0';
		d = (f + s + d) / 10;
	}
	if (d == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = d + '0';
	}
	return (r);
}
