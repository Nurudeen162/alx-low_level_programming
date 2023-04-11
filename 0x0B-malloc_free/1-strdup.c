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
	int q = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
		return (NULL);
	while (q < i)
	{
		s[q] = str[q];
		q++;
	}
	s[q] = '\0';
	return (s);
}
