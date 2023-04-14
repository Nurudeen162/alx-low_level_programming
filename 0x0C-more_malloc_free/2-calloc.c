#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: element of the memory allocated
 * @size: size of the element in bytes
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0;
	int l = 0;
	char *p;

	l = nmemb * size;
	p = malloc(l);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < l)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
