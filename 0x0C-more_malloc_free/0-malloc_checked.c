#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - Functions that allocate memory
 * @b: memory allocated
 * Return: the value of allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
