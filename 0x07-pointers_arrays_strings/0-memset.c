#include "main.h"
/**
 * _memset - Afunction that fill memory with constant byte
 * @s: pointed value
 * @b: constant byte
 * @n: number of byte to be set
 * Return: 0 Always
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
