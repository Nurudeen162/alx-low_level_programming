#include "main.h"
/**
 * print_diagonal - Draws a diagonal lines according to parameter
 * @n: The number of times character \ should printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x, y;

		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				if (x == y)
					_putchar('\\');
				else if (x < y)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
