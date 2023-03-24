#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: No of times
 * Return: Always 0
 *
 */

void print_diagonal(int n)
{
	int a, b;

	if (n >= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
