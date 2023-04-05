#include "main.h"
/**
 * _pow_recursion - return the value of x raise to y
 * @x: the valeu to be raised
 * @y: the value to be raised
 * Return: an intger value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
