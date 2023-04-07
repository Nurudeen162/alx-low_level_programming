#include "main.h"
#include <stdio.h>
/**
 * is_prime_number_helper - Returns if a number is prime
 * @i: the input integer
 * @n: the input integer
 * Return: an integer value
 */
int is_prime_number_helper(int n, int i)
{
	if (n <= 2 || n % i == 0)
	{
		return ((n == 2 || n == i) ? 1 : 0);
	}
	return (is_prime_number_helper(n, i + 1));
}
/**
 * is_prime_number - Returns the recursive prime number
 * @n: The input integer
 * Return: an integer value
 */
int is_prime_number(int n)
{
	return (is_prime_number_helper(n, 2));
}
