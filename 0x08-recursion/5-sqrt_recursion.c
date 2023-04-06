#include "main.h"
#include <stdio.h>
int sqrt_helper(int n, int low, int high);
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: integer input to find the square root
 * Return: integer square root of n or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (sqrt == n)
	{
		return (0);
	}
	else
	{
		return (sqrt_helper(n, 1, n));
	}
}
/**
 * sqrt_helper -  function for finding the sqaure root recursively
 * @n: integer input to find the square root
 * @low: integer lower bound of the search range
 * @high: integer upper bound of the search range
 * Return: integer square root of n or -1
 */
int sqrt_helper(int n, int low, int high)
{
	int mid = (low + high) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		if (mid == low)
		{
	return (-1);
		}
	else
	{
		return (sqrt_helper(n, mid, high));
	}
	}
	else
	{
		return (sqrt_helper(n, low, mid));
	}
}
