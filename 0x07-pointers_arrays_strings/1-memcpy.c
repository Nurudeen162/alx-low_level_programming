#include "main.h"
/**
 * _memcpy - A functions that copies memory area
 * @n: number of bytes to copy
 * @src: source memory area
 * @dest: destination memory area
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;
	char *psrc = src;

	while (n--)
	{
		*pdest++ = *psrc++;
	}
	return (dest);
}
