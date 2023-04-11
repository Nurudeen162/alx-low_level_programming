#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Duplicate a string
 * @str: The string to duplicate
 * Return: The string duplicated
 */
char *_strdup(char *str)
{
	size_t len = strlen(str);
	char *dup = (char *)malloc(len + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	if (dup == NULL)
	{
		return (NULL);
	}
	strcpy(dup, str);
	return (dup);
}
