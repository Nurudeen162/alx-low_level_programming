#include "main.h"
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: integer input to find the square root
 * @i: iterate number
 * _sqrt - calculates natural square
 * Return: integer square root of n or -1
 */
int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (n > 0)
	{
		return (-1);
	}
	else if (sqrt == n)
	{
		return (1);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}
